#include "stdio.h"
int height , base  ;
float area ;
main(){
	printf("Enter your height : ");
	scanf("%d",&height);
	printf("Enter your base : ");
	scanf("%d",&base);
	
	area = 0.5 * base * height;
	
	printf("%.2f",area);
	
}
