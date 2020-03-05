#include <stdio.h>
#include "farnarkle.h"
#include <ctype.h>

// read N_TILES tiles into array tiles
// return 1 if successful, 0 otherwise
int read_tiles(int tiles[N_TILES]) {
	int i=0;
	for(;i<N_TILES;i++)
		{
		
		if(scanf("%d", &tiles[i])!=1)
			{
			return 0;
			}
		}

	return 1;
}

// print tiles on a single line
void print_tiles(int tiles[N_TILES]) {
	int j=0;
	while(j<N_TILES){
	printf("%d ", tiles[j]);
	j++;
	}

	printf("\n");
    // replace with your code
}

