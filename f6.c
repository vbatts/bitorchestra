#include "audio.h"
main(t){
	int y,x;

	init();
	for(t=0;;t++)
	{
		x=t*"6689"[t>>16&3]/24&127;
		y=t&16383;
		if (y==0 || x==0)
			continue;
		
		p((30000000000/(y)&1)*35+(x)*y/400000000+((t>>8^t>>10|1>>14|x)&63));
	}
}
