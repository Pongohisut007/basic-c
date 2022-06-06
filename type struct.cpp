#include "stdio.h"
typedef struct{
	int height, weight ;
	char gender;
} Person;
main(){
//	Person p[5];
//	p[0].height = 178;
//	p[0].weight = 63;
//	p[0].gender = 'M';
//	p[1] = {.height = 178, .weight = 63, gender = 'M'};
//	p[2] = { 178 , 63 , 'M';}

	Person p[] = {
		
	{178 , 63 , 'M' },
	{175 , 60 , 'M' },
	{170 , 58 , 'M' },
	
	};
	int size = sizeof(p)/sizeof(p[0]);
	for(int i=0; i<size; i++){
		printf("%d %d %d \n", p[i].height, p[i].weight, p[i].gender);
	}

}
