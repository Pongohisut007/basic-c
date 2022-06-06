#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int arr[1000][1000];
main(){
	int N, Sumup = 0, Sumdown = 0 ;
	scanf("%d", &N);	
	for(int r=0; r<N; r++)
	    for(int c=0; c<N; c++)
			scanf("%d",&arr[r][c]);
			

	for(int r=0; r<N; r++){
		for(int c=r+1; c<N; c++){
			Sumup += arr[r][c];
			Sumdown += arr[c][r];
		}
	}
	

	 printf("%d \n%d",Sumup,Sumdown)	;		
			
}


