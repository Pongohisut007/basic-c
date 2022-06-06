#include "stdio.h"
#include "math.h"
main(){
int K;
scanf("%d",&K);

int cen = K/2;

int arr[K/2+1];

for(int i=0; i<K/2+1; i++)
	arr[i] = 0 ;

for(int r=0; r<K; r++){
	for(int c=0; c<K; c++){
		int x,y;
		scanf("%d",&x);
		if (abs(r-cen) > abs(c-cen))
			y = abs(r-cen);
		else
			y = abs(c-cen);	
     	arr[y] += x;
	}

}
for (int i=0; i<K/2+1; i++)
printf("%d \n",arr[i]);


}
