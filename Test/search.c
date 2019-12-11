#include "data.h"

void search() {
	char x[NAME_LENGTH] = "l";
	printf("°Ë»ö : ");
	gets(x);

	for (int i = 0; i < MUSIC_COUNT; i++) if (strstr(Info[i].name, x)) 
		printf("%s\t%s\t%s\t%d\n", Info[i].name, Info[i].artist, Info[i].type, Info[i].playtime);
	
}