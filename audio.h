
#ifndef BITORC_AUDIO_H
#define BITORC_AUDIO_H

struct s_config {
  int quiet;
  char* filename;
};

void init(struct s_config s);
void p(int i);
void quit();

#endif

// vim:set sw=2 sts=2 et ai:
