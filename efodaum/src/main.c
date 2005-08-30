#include <stdio.h>
#include <stdbool.h>

#include "interface/interface.h"

int main(int argc, char **argv, char **envp) {

  if (!create_gui(&argc, argv)){
    fprintf(stderr,"Unable to init gui!!\n");
    return -1;
  }

  main_loop();

  return 0;

}
