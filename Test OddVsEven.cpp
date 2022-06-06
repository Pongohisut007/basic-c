#include "stdio.h"
int main(){
	int i = 0,sumEven = 0, sumOdd = 0;
	while(i < 8 ){
		int x;
		scanf("%d",&x);
		if(x%2 == 0){
		sumEven += x;
		i++;
	}
		else{
		sumOdd += x;	
			i++;
		}
		
		}
		
		
	if(sumEven > sumOdd){
		printf("even \n");	
	}
	else if(sumOdd > sumEven){
		printf("odd \n");
	}
	else{
		printf("equal \n");	
	}
		
		
	printf("even %d \n",sumEven);
	printf("odd %d \n",sumOdd);
	
}
