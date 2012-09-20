
#include <stdio.h>

const char* audio_dev = "/dev/audio";
FILE* audio;

void init() {
	audio = fopen(audio_dev, "w");
}

void p(int i) {
	//fputc(i, audio);
	putchar(i);
}

