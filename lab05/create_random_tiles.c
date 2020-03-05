#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "farnarkle.h"

// set tiles to pseudo-random values
void create_random_tiles(int tiles[N_TILES]) {
    int i;
    sleep(1);
    // seed (initialize) pseudo-random number generate with current time in seconds
    srand(time(NULL)); 
    
    i = 0;
    while (i < N_TILES) {
        // rand() returns a peudo-random integer in ranger 0 to RAND_MAX inclusive
        // convert to an integer in the range 1..MAX_TILE_template
        tiles[i] = rand() % MAX_TILE + 1;
        i = i + 1;
    }
}

