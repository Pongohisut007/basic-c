#include "stdio.h"
#include "limits.h"
int arr[1000][1000];
main(){
int rows,cols;
scanf("%d%d",&rows,&cols);

for(int r=0; r<rows; r++)
	for(int c=0; c<cols; c++)
		scanf("%d",&arr[r][c]);
		
/// Max cols
for(int c=0; c<cols; c++){
	int MAX = INT_MIN;
	for(int r=0; r<rows; r++){
		if(arr[r][c] > MAX)	
			MAX = arr[r][c];
	}
	printf("%d ",MAX);
}

// Max rows
printf("\n");		
for(int r=0; r<rows; r++){
	int MAX = INT_MIN;
	for(int c=0; c<cols; c++){
		if(arr[r][c] > MAX)	
			MAX = arr[r][c];
	}
	printf("%d ",MAX);
}



	
	
	
	
}
