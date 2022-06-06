#include "stdio.h"
main(){
	int N;
	scanf("%d",&N);
	for(int r=0; r<N; r++){
		for(int c=0; c<N; c++){
			printf("(%d,%d)",r,c);
		}
		printf("\n");
	}

	
}


