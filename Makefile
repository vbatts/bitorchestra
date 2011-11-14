
FILES := $(basename $(wildcard *.c))

all: $(FILES)

%: %.c
	$(CC) -o $@ $<

clean:
	rm -rf $(FILES) *.o *~

