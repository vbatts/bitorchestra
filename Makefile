
MUSIC_FILES := $(basename $(wildcard f*.c))
TMP_FILES := $(wildcard *~) $(wildcard *.o)

all: $(MUSIC_FILES)

audio.o: audio.c audio.h

%: %.c audio.o
	$(CC) -static -s -o $@ $^

clean:
	rm -rf $(MUSIC_FILES) $(TMP_FILES)

