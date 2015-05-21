#include <gtk/gtk.h>


int main( int argc, char *argv[])
{
  gint height;
  gint width;

  GtkWidget *window;
  GtkWidget *image;



  GdkColor color;
  color.red = 0xFFFF;
  color.green = 0xFFFF;
  color.blue = 0xFFFF;


  gtk_init(&argc, &argv);


  width = gdk_screen_width();
  height = gdk_screen_height();

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "GNAR");
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);
  gtk_widget_set_size_request(window, width, height);
  gtk_container_set_border_width(GTK_CONTAINER(window), 2);

  
  image = gtk_image_new_from_file("gnar.png");
  gtk_container_add(GTK_CONTAINER(window), image);

  g_signal_connect_swapped(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), G_OBJECT(window));
  
  
  gtk_widget_show_all(window);

 
  
  gtk_main();

  return 0;
}





