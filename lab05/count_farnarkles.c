#include <stdio.h>
#include "farnarkle.h"

// return number of farnarkles
int count_farnarkles(int hidden_sequence[N_TILES], int guess[N_TILES]) {
	int sum1=0;
	int i=0;
	for(;i<N_TILES;i++){
	if(hidden_sequence[i]==guess[i])
		{
		sum1=sum1+1;
		}

	}
	
    return sum1; // replace with your code
}
