#include "stdio.h"
int main(){
	int n, A = 0, B = 0 , C = 0;
	// choose loob
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		// Input date
		int x;
		scanf("%d",&x);
		// process about What min Sort A B C
		if(A <= B && A <= C){
			printf("A \n");
			 A += x;
		}
		else if(B <= A && B <= C){
			printf("B \n");
			 B += x ;
		}
		else{
			printf("C \n");
			 C += x ;
		}
	}
}
