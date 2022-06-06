#include "stdio.h"
#include "stdlib.h"
#include "time.h"
main(){
int password[9];
int i,j,temp;

srand(time(NULL));
for(int i=0; i<10; i++)
	password[i] = i ;
	
for(int i=0; i<10; i++)
	printf("   %d",password[i]);
	
for(int i=0; i<9; i++){
	j = (rand()%10);
	temp = password[i];
	password[i] = password[j]; 	
	password[j] = temp;
}





printf("\n-------------------------------------------\n");

//for(int i=0; i<10; i++)
	printf("   %d",password[0]);
	printf("   %d",password[1]);
	printf("   %d",password[2]);
	printf("   %d",password[3]);
	printf("   %d",password[4]);
	printf("   %d",password[5]);
	printf("   %d",password[6]);
	printf("   %d",password[7]);
	printf("   %d",password[8]);
	printf("   %d",password[9]);
		
}
