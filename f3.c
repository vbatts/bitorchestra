main(int t) {
	for(;;t++)
		putchar(t*9&t>>4|t*5&t>>7|t*3&t/1024)-1;
}
