#include "stdio.h"
main(){
	int N;
	scanf("%d", &N);
	for(int r=0; r<N ; r++){
		for(int c=0; c<N; c++){
			printf("(%d, %d)",r,c);
		}
		printf("\n");
	}
	printf("========================================= \n");
	for(int r=0; r<N ; r++){
		for(int c=0; c<N; c++){
			if(r == 0 || r==N-1 || c == 0 || c==N-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}

