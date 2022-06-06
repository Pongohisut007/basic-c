#include "stdio.h"
int main(){
int x, y , z;
scanf("%d%d%d",&x,&y,&z);

// x is min
if(x < y && x < z){
	printf("%d ",x);
	if(y < z)
		printf("%d %d",y,z);
	else
		printf("%d %d",z,y);
}
// y is min
else if(y < x && y < z){
	printf("%d ",y);
	if(x < z)
		printf("%d %d",x,z);
	else
		printf("%d %d",z,x);
}
// z i min
else{
	printf("%d ",z);
	if(x < y)
		printf("%d %d",x,y);
	else
		printf("%d %d",y,x);
}




}
