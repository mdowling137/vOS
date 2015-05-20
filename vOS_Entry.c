#include <gtk/gtk.h>

int main( int argc, char *argv[])
{
  gint height;
  gint width;
  GtkWidget *window;
  GdkColor color;
  color.red = 0xffff;
  color.green = 0xffff;
  color.blue = 0;
  gtk_init(&argc, &argv);
  width = gdk_screen_width();
  height = gdk_screen_height();
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Center");
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);
  gtk_widget_set_size_request(window, width, height);
  gtk_widget_show(window);
  
  
  gtk_main();

  return 0;
}





