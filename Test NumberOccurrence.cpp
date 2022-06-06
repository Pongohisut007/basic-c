#include "stdio.h"
int arr[2500000];
main(){
	int N, K, c = 0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&arr[i])	;
	scanf("%d",&K);
	for(int i=0;i<N;i++){
		if(arr[i] == K){
		c++;
		printf("%d ",i+1);
		}
		
	}
	if( c == 0)
	printf("0");
	
}
