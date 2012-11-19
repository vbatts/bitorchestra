
#include "audio.h"
#include "sounds.h"

void sound_loop_1(int (*sp)(int i), int t) {
  for (t = 0;;t++) {
    p((*sp)(t));
  }
}

int sound_1(int t) {
    return (t >> 6 | t | t >> (t >> 16)) * 10 + ((t >> 11) & 7);
}

int sound_2(int t) {
  return (t*(((t>>12)|(t>>8))&(63&(t>>4))));
}

int sound_3(int t) {
  return (t*9&t>>4|t*5&t>>7|t*3&t/1024);
}
int sound_5(int t) {
  return (((t*("36364689"[t>>13&7]&15))/12&128)+(((((t>>12)^(t>>12)-2)%11*t)/4|t>>13)&127));
}

// vim:set sw=2 sts=2 et ai:
