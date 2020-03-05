#include <stdio.h>
#include "farnarkle.h"

int main(void) {
    int hidden_sequence[N_TILES];
	int turn=1;
    
    create_random_tiles(hidden_sequence);
	int guess[N_TILES];
	printf("Enter guess for turn %d: ", turn);
	turn++;
	read_tiles(guess);
	printf("%d farnarkles ", count_farnarkles(hidden_sequence, guess));
    printf("%d arkles\n", count_arkles(hidden_sequence, guess));
	while(count_farnarkles(hidden_sequence, guess)!=4)
	{
 
		printf("Enter guess for turn %d: ", turn);
		read_tiles(guess);
		printf("%d farnarkles ", count_farnarkles(hidden_sequence, guess));
		printf("%d arkles\n", count_arkles(hidden_sequence, guess));
		turn++;
	}
		
	printf("You win\n");
		
    return 0;
}

    // put your code here

