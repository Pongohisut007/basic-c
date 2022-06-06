#include "stdio.h"
#include "limits.h"
main(){
	int i = 0,maxX = INT_MIN,minX = INT_MAX;
	
	while(i < 8){
		int x ;
		scanf("%d",&x);
		if(x > 0){
			if(x > maxX){
				maxX = x ;
			}
			if(x < minX){
				minX = x;
			}	
		}
		i++;
	}
	printf("Max %d \n",maxX);
	printf("Min %d \n",minX);
}
