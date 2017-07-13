#include <gtk/gtk.h>

gint delete_handler(GtkWidget *widget, gpointer data)
{
	g_print("delete_handler\n");
	gtk_main_quit();
	return FALSE;
}

void button_clicked(GtkWidget *widget, gpointer data)
{
	g_print("You clicked the Button\n");
	return;
}

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);

	GtkWidget *mainwindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	gtk_window_set_title(GTK_WINDOW(mainwindow), "fwjscience");
	gtk_window_set_default_size(GTK_WINDOW(mainwindow), 200, 200);
	gtk_container_border_width(GTK_CONTAINER(mainwindow), 3);

	gtk_signal_connect(GTK_OBJECT(mainwindow), "delete_event",
			GTK_SIGNAL_FUNC(delete_handler), NULL);

	GtkWidget *test_button = gtk_button_new_with_label("OK");

	gtk_signal_connect(GTK_OBJECT(test_button), "clicked",
			GTK_SIGNAL_FUNC(button_clicked), NULL);

	GtkWidget *fixed = gtk_fixed_new();
	gtk_fixed_put(GTK_FIXED(fixed), test_button, 120, 160);
	gtk_widget_set_size_request(test_button, 80, 35);

	gtk_container_add(GTK_CONTAINER(mainwindow), fixed);
	gtk_widget_show_all(mainwindow);
	gtk_main();

	return 0;
}
