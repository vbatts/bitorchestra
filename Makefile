
MUSIC_FILES := $(basename $(wildcard f*.c)) main
TMP_FILES := $(wildcard *~) $(wildcard *.o)
CFLAGS +=
LDFLAGS += -g
CC = gcc
all: $(MUSIC_FILES)

audio.o: audio.c audio.h
sounds.o: sounds.c sounds.h

%: %.c audio.o sounds.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -rf $(MUSIC_FILES) $(TMP_FILES)

