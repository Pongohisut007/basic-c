#include "stdio.h"
main(){
	int income,resulf;
	float x;
	x = 2.0;
	printf("Enter your annual income : ");
	scanf("%d",&income);
	if(income < 200000){
		printf("No tax");
	}
	else if(income >=200000 && income <500000){
		printf("Tax = 7% \n");
		resulf = (income * 7) / 100 ;
		printf("spend = %d ",resulf);
	}
	else if(income >=500000 && income <1000000){
		printf("Tax = 20% \n");
		resulf = (income * 20) / 100 ;
		printf("spend = %d ",resulf);
	}
		else if(income >=1000000){
		printf("Tax = 30% \n");
		resulf = (income * 30) / 100 ;
		printf("spend = %d ",resulf);
	}
	
	
}
