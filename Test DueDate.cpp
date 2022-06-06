#include "stdio.h"
main(){
	int k, n ,sum = 0;
	scanf("%d%d",&k,&n);
	for(int i=0; i<n; i++){
		int x;
		scanf("%d",&x);
		sum += x;
		if(sum%(k*100)==0)
		printf("%d \n",sum/(k*100));
		else
		printf("%d \n",sum/(k*100)+1);
	}
	
}
