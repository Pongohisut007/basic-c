#include "stdio.h"
#include "limits.h"
main(){
	int target, count = 0 , consec = 0 , maxConsec = INT_MIN;
	scanf("%d",&target);
	while(1){
		int x;
		scanf("%d",&x);
		if(x == 0){
			break;
		}
		if(x == target){
			count++;
			consec++;
		}
		else{
			consec = 0 ;
		}
		if(consec > maxConsec){
			maxConsec = consec;
		}
	
	}
	printf("%d\n%d",maxConsec,count);
}
