#include <stdio.h>
#include <stdbool.h>
#include <Ewl.h>

#define PROGRAM_TITLE "EFodaum, porque ele eh fodaum!"
#define PROGRAM_NAME "Efodaum"
#define PROGRAM_CLASS "streaming"

#define WINDOW_SIZE_X 500
#define WINDOW_SIZE_Y 300

/* The main window widget */
Ewl_Widget *main_window;

/* main program loop */
void main_loop ();

/* creates the interface */
bool create_gui (int *argc, char **argv);

/* the callback funcion called when the main window is deleted */
void destroy_callback(Ewl_Widget *window, void *event, void *data);


