#include <stdio.h>
#include "farnarkle.h"

// return number of arkles
int count_arkles(int hidden_sequence[N_TILES], int guess[N_TILES]) {
		int sum=0;
		int i=0;
		int j=0;
		int num[N_TILES];
		int x=0;
		for(;x<N_TILES;x++)
		{
			num[x]=guess[x];
		}
		for(;i<N_TILES;i++)
		{
			for(;j<N_TILES;j++)
			{
				if(hidden_sequence[i]==num[j]&&hidden_sequence[i]!=num[i]&&hidden_sequence[j]!=num[j])
				{
					num[j]=99;
					sum++;
					break;
				}
			}
			j=0;
		}

					
        return sum; // replace with your code
}

