#include <gtk/gtk.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


GtkWidget *textview;

static void 
Calculator(GtkButton *button, gpointer data)	
{
	const gchar* text = gtk_button_get_label(button);
	char buttonp = *text;
	//printf("%c", buttonp);
}

static void
activate (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkWidget *grid;
  GtkWidget *button;
 

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Calculator");
  gtk_window_set_default_size (GTK_WINDOW (window), 200, 300);

  grid = gtk_grid_new ();

  gtk_window_set_child (GTK_WINDOW (window), grid);

  textview = gtk_text_view_new ();
  gtk_grid_attach (GTK_GRID (grid), textview, 0, 0, 4, 1);
  
  button = gtk_button_new_with_label ("1");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 0, 2, 1, 1);

    button = gtk_button_new_with_label ("2");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 1, 2, 1, 1);

    button = gtk_button_new_with_label ("3");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 2, 2, 1, 1);

  button = gtk_button_new_with_label ("4");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 0, 3, 1, 1);

    button = gtk_button_new_with_label ("5");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 1, 3, 1, 1);

    button = gtk_button_new_with_label ("6");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 2, 3, 1, 1);

  button = gtk_button_new_with_label ("7");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 0, 4, 1, 1);

    button = gtk_button_new_with_label ("8");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 1, 4, 1, 1);

    button = gtk_button_new_with_label ("9");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 2, 4, 1, 1);

  button = gtk_button_new_with_label ("+");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 4, 1, 1, 1);

  button = gtk_button_new_with_label ("-");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 4, 2, 1, 1);

    button = gtk_button_new_with_label ("*");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 4, 3, 1, 1);

    button = gtk_button_new_with_label ("/");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 4, 4, 1, 1);

    button = gtk_button_new_with_label ("=");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 1, 5, 4, 1);

     button = gtk_button_new_with_label ("0");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 0, 5, 1, 1);
 
     button = gtk_button_new_with_label ("C");
  g_signal_connect (button, "clicked", G_CALLBACK (Calculator), NULL);
  gtk_grid_attach (GTK_GRID (grid), button, 4, 0, 1, 1);

  gtk_window_present (GTK_WINDOW (window));
}

int
main (int    argc,
      char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}

