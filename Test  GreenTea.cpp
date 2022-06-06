#include "stdio.h"
main(){
	int i=0 ;
	while(i < 7){
		int water , sugar,product;
		scanf("%d%d",&water,&sugar);
		int productW = water/250;
		int productS = sugar/15;
		if(productW < productS){
			product = productW;
		}
		else{
			product = productS;
		}
		i++;
		printf("%d",product);
		if(water - product*250 > 0){
			printf(" water");
		}
		printf("\n");
	}

	
}
