
#include <stdio.h>

#include "audio.h"

//const char* audio_dev = "/dev/audio";
FILE* audio = NULL;
int quiet = 0;

void init(struct s_config s) {
  if (s.filename != NULL) {
    audio = fopen(s.filename, "a");
  }
  if (s.quiet == 1) {
    quiet = 1;
  } else {
    quiet = 0;
  }
}

void p(int i) {
  if (audio != NULL) {
    fputc(i, audio);
  }
  if (!quiet) {
    putchar(i);
  }
}

void quit() {
  if (audio != stdout) {
    fclose(audio);
  }
}

// vim:set sw=2 sts=2 et ai:
