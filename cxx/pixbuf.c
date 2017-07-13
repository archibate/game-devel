#include <gtk/gtk.h>

#define IMAGE_FILE "../resource/paltanen_1024x768.jpg"
#define QIMAGE_FILE "../resource/firework_1600x1200.jpg"

void quit(void)
{
	gtk_exit(0);
}

int average(int p, int q, float factor)
{
	return p * factor + q * (1 - factor);
}

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);

	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	gtk_window_set_title(GTK_WINDOW(window), "fwjscience");
	gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
	gtk_container_border_width(GTK_CONTAINER(window), 3);

	GtkWidget *image = gtk_image_new_from_file(IMAGE_FILE);
	GdkPixbuf *pixbuf = gtk_image_get_pixbuf(GTK_IMAGE(image));

	GtkWidget *qimage = gtk_image_new_from_file(QIMAGE_FILE);
	GdkPixbuf *qixbuf = gtk_image_get_pixbuf(GTK_IMAGE(qimage));

	int width = gdk_pixbuf_get_width(pixbuf);
	int height = gdk_pixbuf_get_height(pixbuf);
	int nchannels = gdk_pixbuf_get_n_channels(pixbuf);
	int rowstride = gdk_pixbuf_get_rowstride(pixbuf);

	int qwidth = gdk_pixbuf_get_width(qixbuf);
	int qheight = gdk_pixbuf_get_height(qixbuf);
	int qnchannels = gdk_pixbuf_get_n_channels(qixbuf);
	int qrowstride = gdk_pixbuf_get_rowstride(qixbuf);

	guchar *pixels = gdk_pixbuf_get_pixels(pixbuf);
	guchar *qixels = gdk_pixbuf_get_pixels(qixbuf);
	for (int x = 0; x < width; x++)
		for (int y = 0; y < height; y++) {
			guchar *p = pixels + y * rowstride + x * nchannels;
			guchar *q = qixels + y * qrowstride + x * qnchannels;
			p[0] = average(p[0], q[0], 0.45);
			p[1] = average(p[1], q[1], 0.60);
			p[2] = average(p[2], q[2], 0.75);
			//p[0] = 255 - p[0];
			//p[1] = 255 - p[1];
			//p[2] = 255 - p[2];
		}

	gtk_container_add(GTK_CONTAINER(window), image);

	gtk_signal_connect(GTK_OBJECT(window), "delete_event",
			GTK_SIGNAL_FUNC(quit), NULL);

	gtk_widget_show_all(window);
	gtk_main();

	return 0;
}

