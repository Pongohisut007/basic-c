#include "stdio.h"
int arr[1000][1000];
main(){
int K;
scanf("%d",&K);
for(int r=0; r<K; r++)
	for(int c=0; c<K; c++)
		scanf("%d",&arr[r][c]);
		
for(int r=0; r<K; r++){
	for(int c=0; c<K; c++){
		printf("(%d,%d) = %d ",r,c,arr[r][c]);
	}
	printf("\n");
}
	
int start = K/2, stop = K/2, sum = 0;
for(int i=0; i<K/2+1; i++){
int s = 0;
	for(int r=start; r<=stop; r++)
		for(int c=start; c<=stop; c++)
			s += arr[r][c];
 			printf("%d \n", s - sum);
 			sum = s;
 			start--;
 			stop++;
 	
}

	
}
