#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

GdkPixmap *pixmap = NULL;
int radius;

gint repaint(gpointer data)
{
	GtkWidget *drawing_area = (GtkWidget *) data;
	GdkRectangle update_rect;

	gdk_draw_rectangle(pixmap, drawing_area->style->black_gc,
			TRUE, 0, 0,
			drawing_area->allocation.width,
			drawing_area->allocation.height);
	int orig_x = drawing_area->allocation.width / 2;
	int orig_y = drawing_area->allocation.height / 2;

	radius = MIN(orig_x, orig_y);

	gtk_widget_draw(drawing_area, &update_rect);
}

gint configure_event(GtkWidget *widget, GdkEventConfigure *event)
{
	g_print("configure_event: called\n");
	if (pixmap)
		gdk_pixmap_unref(pixmap);

	pixmap = gdk_pixmap_new(widget->window,
			widget->allocation.width,
			widget->allocation.height,
			-1);
	return TRUE;
}

gint expose_event(GtkWidget *widget, GdkEventExpose *event)
{
	g_print("expose_event: called\n");
	gdk_draw_pixmap(widget->window,
			widget->style->fg_gc[GTK_WIDGET_STATE (widget)],
			pixmap,
			event->area.x, event->area.y,
			event->area.x, event->area.y,
			event->area.width, event->area.height);
	return FALSE;
}

void quit(void)
{
	gtk_exit(0);
}

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);

	GtkWidget *mainwindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	//gtk_window_set_title(GTK_WINDOW(mainwindow), "fwjscience - clock demo");
	//gtk_window_set_default_size(GTK_WINDOW(mainwindow), 400, 400);
	//gtk_container_border_width(GTK_CONTAINER(mainwindow), 3);

	GtkWidget *vbox = gtk_hbox_new(FALSE, 0);
	gtk_container_add(GTK_CONTAINER(mainwindow), vbox);
	gtk_widget_show(vbox);

	gtk_signal_connect(GTK_OBJECT(mainwindow), "destroy",
			GTK_SIGNAL_FUNC(quit), NULL);

	GtkWidget *drawing_area = gtk_drawing_area_new();
	gtk_drawing_area_size(GTK_DRAWING_AREA(drawing_area), 400, 400);
	gtk_box_pack_start(GTK_BOX(vbox), drawing_area, TRUE, TRUE, 0);
	gtk_widget_show(drawing_area);

	gtk_signal_connect(GTK_OBJECT(drawing_area), "expose_event",
			GTK_SIGNAL_FUNC(expose_event), NULL);
	gtk_signal_connect(GTK_OBJECT(drawing_area), "configure_event",
			GTK_SIGNAL_FUNC(configure_event), NULL);

	gtk_widget_show(mainwindow);

	gtk_timeout_add(1000, repaint, drawing_area);

	gtk_main();
	return 0;
}
