/*
#include "stdio.h"
main(){
	int age[5] ;
	int i ;
	age[0] = 10 ;
	age[1] = 20 ;
	age[2] = 30 ;
	age[3] = 40 ;
	age[4] = 50 ;
					
	for(i=0;i<=4;i++){
		printf("age[%d] = %d \n",i,age[i]);
	}
	
	return 0 ;
	
	
	
}
*/
#include "stdio.h"
main(){
	int age[5] ;
	int i ;
	for(i=0;i<=4;i++){
		printf("Enter [%d] : ",i);
		scanf("%d",&age[i]);
		
	}
					
	for(i=0;i<=4;i++){
		printf("age[%d] = %d \n",i,age[i]);
	}
	
	return 0 ;
	
	
	
}
