#include "stdio.h"
main(){
int K = 5, count = 0 ;
//Upper 
for(int r=0; r<K; r++)
		printf("%d ",(count)%10 );
	printf("\n");
	
// body
for(int r=1; r<=K-2; r++){
	for(int c=0; c<=K-r-1; c++)
		printf("  ");
	printf("%d",(count)%10);
}

///Lower	
for(int r=0; r<K; r++)
	printf("%d ",(count)%10);
	
}
