#include "stdio.h"
typedef struct{
	char id[9];
	char name[31];
	char surname[51];
	float gpa;
} Student;
Student s[100];
main(){
	int N;
	scanf("%d",&N);
	float Maxgpa = 0 ;
	for(int i=0; i<N; i++){
		scanf("%s %s %s %f",s[i].id, s[i].name, s[i].surname, &s[i].gpa);
		if (s[i].gpa > Maxgpa)
			Maxgpa = s[i].gpa ; 
		
	}
	printf("-------------------------------------------------- \n");
		for(int i=0; i<N; i++){
			if (s[i].gpa == Maxgpa)
		printf("%s %s %s %.2f \n",s[i].id, s[i].name, s[i].surname, s[i].gpa);
	}
	
}
