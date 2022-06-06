#include "stdio.h"
int arr[500][500];
main(){
int K = 5;

int count = 0;
for(int r=0; r<K; r++)
	for(int c=0; c<K; c++)
		arr[r][c] = -1;
		
//Upper
for(int c=0; c<K; c++)
	arr[0][c] = (count++) %10;

//body
for(int r=1; r<K-1; r++)
	arr[r][K-r-1] = (count++) %10;

//Upper
for(int c=0; c<K; c++)
	arr[K-1][c] = (count++) %10;		
		
			

for(int r=0; r<K; r++){
	for(int c=0; c<K; c++){
		if(arr[r][c] < 0)
			printf("  ");
		else
		printf("%d ",arr[r][c]);
	}
	printf("\n");
}
	


}	

