#include "audio.h"
int main(int t) {
	//init();
	for (t = 0;;t++) {
		int i;
		i = (t>>7-(t>>15)&-t>>7-(t>>15));
		if (i==0)
			continue;
		p(t>>4|t&(t>>5)/i);
	}
}

