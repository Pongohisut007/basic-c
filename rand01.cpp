#include "stdio.h"
#include "stdlib.h"
#include "time.h"
main(){
	int x ;
	srand(time(NULL));
	x = rand()%10 ;
	printf("%d",x);
}
