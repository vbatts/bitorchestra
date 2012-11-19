
#include <stdio.h>

const char* audio_dev = "/dev/audio";
FILE* audio;

void init(char* dev_file_name) {
  if (dev_file_name != NULL) {
    audio = fopen(dev_file_name, "a");
  } else {
    audio = stdout;
  }
}

void p(int i) {
  //fputc(i, audio);
  putchar(i);
}

// vim:set sw=2 sts=2 et ai:
