#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "audio.h"
#include "sounds.h"

void usage(char* name, int exit_stat) {
  fprintf(stderr, "Usage: %s [-f filename] < -s 1-6 >\n", name);
  exit(exit_stat);
}

int main(int ac, char* av[]) {
  int opt;
  int sound_choice = 0;
  //int quiet = 0;
  //char* filename = NULL;
  struct s_config s;
  
  while ((opt = getopt(ac, av, "hf:s:q")) != -1) {
    switch (opt) {
      case 'q':
        s.quiet = 1;
        break;
      case 's':
        sound_choice = atoi(optarg);
        break;
      case 'f':
        s.filename = optarg;
        break;
      case 'h':
        usage(av[0], EXIT_SUCCESS);
      default:
        usage(av[0], EXIT_FAILURE);
    }
  }

  if (sound_choice == 0) {
    fprintf(stderr, "ERROR: pleaese choice a sound (currently 1-6)\n");
    usage(av[0], EXIT_FAILURE);
  }

  init(s);

  switch (sound_choice) {
    case 1:
      sound_loop_1(sound_1, 0);
      break;
    case 2:
      sound_loop_1(sound_2, 0);
      break;
    case 3:
      sound_loop_1(sound_3, 0);
      break;
    case 4:
      sound_loop_1(sound_4, 0);
      break;
    case 5:
      sound_loop_1(sound_5, 0);
      break;
    case 6:
      sound_loop_1(sound_6, 0);
      break;
  }

  exit(EXIT_SUCCESS);
}

// vim:set sw=2 sts=2 et ai:
