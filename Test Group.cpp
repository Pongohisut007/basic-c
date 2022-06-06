#include "stdio.h"
main(){
	int w,x,y,z,N;
	int count = 0;
	scanf("%d%d%d%d%d",&w,&x,&y,&z,&N);
	int ar[N];
	for(int i=0; i<N; i++)
		scanf("%d",&ar[i]);
	
	for(int i=0; i<=N-4; i++){
		if (ar[i] == w && ar[i+1] == x && ar[i+2] == y && ar[i+3] == z)
			count++;
			
	}
	
	printf("%d \n",count);
	
	for(int i=0; i<=N-4; i++){
		if (ar[i] == w && ar[i+1] == x && ar[i+2] == y && ar[i+3] == z)
			printf("%d",i);
	
}


}

