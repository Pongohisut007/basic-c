#include "stdio.h"
#include "limits.h"
main(){
int N, x, max1 = INT_MIN, max2 = INT_MIN, count = 0;
scanf("%d",&N);
for(int i=0; i<N; i++){
	scanf("%d",&x);
	if(x > max1){
		max2 = max1;
		max1 = x;
		count = 1;
	}
	else if(x == max1){
		if(x != max2){
		max2 = max1;
		count = 2;	
		}
		else{
			count++;
		}
	}
	else if(x > max2 && x < max1){
		max2 = x;
		count = 1;
	}
	else if(x == max2){
		count++;
	}
	printf("M1 %d, M2 %d, C %d \n",max1,max2,count);
} 10
7 8 7 9 9 9 5 4 3 9
//printf("%d\n%d\n%d",max2,max1-max2,count);


}
