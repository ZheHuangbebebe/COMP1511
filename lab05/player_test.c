#include <stdio.h>
#include "farnarkle.h"

int main(void) {
	int turn, previous_guesses[MAX_TURNS][N_TILES], farnarkles[MAX_TURNS], arkles[MAX_TURNS], guess[N_TILES];
	int i,j,y;
	int real[N_TILES];
	int x=0;
	int hidden_sequence[N_TILES];
	int num[N_TILES];
	int aaa[N_TILES];
	int k=0;
	int q;
	int p=0;
	int a, b, c, d;
	turn=1;

    printf("Hidden guess is: ");
    create_random_tiles(hidden_sequence);
	print_tiles(hidden_sequence);
	for(j=0;j<10;j++)
		{
		
		guess[0]=guess[1]=guess[2]=guess[3]=j;


		farnarkles[j]=count_farnarkles(hidden_sequence, guess);
		arkles[j]=count_arkles(hidden_sequence, guess);
		y=farnarkles[j];
		while(y>0)
			{
			real[x]=j;
			x++;
			y=y-1;
			}
		farnarkle_player(turn, previous_guesses, farnarkles, arkles, guess);
		printf("Player guess for turn %d:", turn);
		print_tiles(guess);
		printf("%d farnarkles %d arkles\n", farnarkles[j], arkles[j]);
		
		

		if(farnarkles[j]==4)
			{
			printf("Player took %d turns to guess code.\n", turn);
			return 0;
			}
			turn++;
		
		if(x==4)
			{
			break;
			}
		}
			
			
			
		
		

		for(;p<4;p++)
			{

		q=p;
		for(k=0;k<4;k++)
			{
			aaa[0]=real[0];
			aaa[1]=real[1];
			aaa[2]=real[2];
			aaa[3]=real[3];
			num[k]=aaa[q];
			q++;
			if(q==4)
				{
				q=0;
				}
			}
		if(count_farnarkles(hidden_sequence, num)==4)
			{
			printf("Player guess for turn %d:", turn);
			print_tiles(num);
			printf("%d farnarkles %d arkles\n", count_farnarkles(hidden_sequence, num), count_arkles(hidden_sequence, num));
			printf("Player took %d turns to guess code.\n", turn);
			return 0;
			}
		q=p;
		for(k=0;k<4;k++)
			{
			aaa[0]=real[0];
			aaa[1]=real[1];
			aaa[2]=real[3];
			aaa[3]=real[2];
			num[k]=aaa[q];
			q++;
			if(q==4)
				{
				q=0;
				}
			}
		if(count_farnarkles(hidden_sequence, num)==4)
			{
			printf("Player guess for turn %d:", turn);
			print_tiles(num);
			printf("%d farnarkles %d arkles\n", count_farnarkles(hidden_sequence, num), count_arkles(hidden_sequence, num));
			printf("Player took %d turns to guess code.\n", turn);
			return 0;
			}
		q=p;
		for(k=0;k<4;k++)
			{	
			aaa[0]=real[0];
			aaa[1]=real[2];
			aaa[2]=real[1];
			aaa[3]=real[3];
			num[k]=aaa[q];
			q++;
			if(q==4)
				{
				q=0;
				}
			}
		if(count_farnarkles(hidden_sequence, num)==4)
			{
			printf("Player guess for turn %d:", turn);
			print_tiles(num);
			printf("%d farnarkles %d arkles\n", count_farnarkles(hidden_sequence, num), count_arkles(hidden_sequence, num));
			printf("Player took %d turns to guess code.\n", turn);
			return 0;
			}
		q=p;

			
		for(k=0;k<4;k++)
			{
			aaa[0]=real[0];
			aaa[1]=real[2];
			aaa[2]=real[3];
			aaa[3]=real[1];
			num[k]=aaa[q];
			q++;
			if(q==4)
				{
				q=0;
				}
			}
		if(count_farnarkles(hidden_sequence, num)==4)
			{
			printf("Player guess for turn %d:", turn);
			print_tiles(num);
			printf("%d farnarkles %d arkles\n", count_farnarkles(hidden_sequence, num), count_arkles(hidden_sequence, num));
			printf("Player took %d turns to guess code.\n", turn);
			return 0;
			}
		q=p;

			
		for(k=0;k<4;k++)
			{
			aaa[0]=real[0];
			aaa[1]=real[3];
			aaa[2]=real[1];
			aaa[3]=real[2];
		
			num[k]=aaa[q];
			q++;
			if(q==4)
				{
				q=0;
				}
			}
		if(count_farnarkles(hidden_sequence, num)==4)
			{
			printf("Player guess for turn %d:", turn);
			print_tiles(num);
			printf("%d farnarkles %d arkles\n", count_farnarkles(hidden_sequence, num), count_arkles(hidden_sequence, num));
			printf("Player took %d turns to guess code.\n", turn);
			return 0;
			}
		q=p;
			
		for(k=0;k<4;k++)
			{
			aaa[0]=real[0];
			aaa[1]=real[3];
			aaa[2]=real[2];
			aaa[3]=real[1];
			num[k]=aaa[q];
			q++;
			if(q==4)
				{
				q=0;
				}
			}
		if(count_farnarkles(hidden_sequence, num)==4)
			{
			printf("Player guess for turn %d:", turn);
			print_tiles(num);
			printf("%d farnarkles %d arkles\n", count_farnarkles(hidden_sequence, num), count_arkles(hidden_sequence, num));
			printf("Player took %d turns to guess code.\n", turn);
			return 0;
			}
		










}











	
	return 0;
}

    
