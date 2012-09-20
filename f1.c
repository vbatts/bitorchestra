#include "audio.h"

int main() {
	//init();
	int t;
	for (t = 0;;t++) {
		p((t >> 6 | t | t >> (t >> 16)) * 10 + ((t >> 11) & 7));
	}
}

