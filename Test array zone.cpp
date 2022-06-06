#include "stdio.h"
int arr[1000][1000];
main(){
int rows,cols;
scanf("%d %d",&rows,&cols);
//scan 
for(int r=0; r<rows; r++)
	for(int c=0; c<cols; c++)
		scanf("%d",&arr[r][c]);	
		
// Idea	
for(int r=0; r<rows; r++){
	for(int c=0; c<cols; c++){
		printf("(%d,%d)",r,c);	
	}
	printf("\n");
}	
	
//Zone	1
printf("Zone 1 \n");
for(int r=0; r<rows/2; r++){
	for(int c=0; c<cols/2; c++){
		printf("%d ",arr[r][c]);	
	}
	printf("\n");
	
}

//Zone 2
printf("Zone 2 \n");
for(int r=0; r<rows/2; r++){
	for(int c=cols/2; c<cols; c++){
		printf("%d ",arr[r][c]);	
	}
	printf("\n");
	
}

//Zone 3
printf("Zone 3 \n");
for(int r=rows/2; r<rows; r++){
	for(int c=0; c<cols/2; c++){
		printf("%d ",arr[r][c]);	
	}
	printf("\n");
	
}

//Zone 4
printf("Zone 4 \n");
for(int r=rows/2; r<rows; r++){
	for(int c=cols/2; c<cols; c++){
		printf("%d ",arr[r][c]);	
	}
	printf("\n");
	
}

}
