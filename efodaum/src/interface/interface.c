#include <stdio.h>
#include <stdbool.h>
#include <Ewl.h>

#include "interface.h"


void main_loop () {
  ewl_main();
}

bool create_gui (int *argc, char **argv) {
  
  if (!ewl_init(argc, argv)) {
    fprintf(stderr, "Unable to init ewl!!!\n");
    return false;
  }

  main_window = ewl_window_new ();
  ewl_window_title_set (EWL_WINDOW(main_window), PROGRAM_TITLE);
  ewl_window_name_set (EWL_WINDOW(main_window), PROGRAM_NAME);
  ewl_window_class_set (EWL_WINDOW(main_window), PROGRAM_CLASS);
  ewl_object_size_request (EWL_OBJECT(main_window), WINDOW_SIZE_X, WINDOW_SIZE_Y);
  ewl_callback_append (main_window, EWL_CALLBACK_DELETE_WINDOW, destroy_callback, NULL);

  ewl_widget_show (main_window);

  return true;
}

void destroy_callback(Ewl_Widget *window, void *event, void *data) {
  ewl_widget_destroy (window);
  ewl_main_quit();
}
