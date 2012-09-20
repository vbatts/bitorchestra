#include "audio.h"
int main(t){
	//init();
	for(t=0;;t++) {
		p(t*(((t>>12)|(t>>8))&(63&(t>>4))));
	}
}
