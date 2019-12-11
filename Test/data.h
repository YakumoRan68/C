#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MUSIC_COUNT 10
#define NAME_LENGTH 50
#define ARTIST_LENGTH 30
#define TYPE_LENGTH 10

struct Music {
	char name[NAME_LENGTH];
	char artist[ARTIST_LENGTH];
	char type[TYPE_LENGTH];
	int playtime;
};

struct Music Info[MUSIC_COUNT];