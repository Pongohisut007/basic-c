#include "stdio.h"
main(){
 int score ;
 char status[40] ;
 printf("Enter your score = ");
 scanf("%d",&score);
 if(score >= 50){
     status = "Pass" ;
 }
 else {
 	     status = "Tryagain" ;

 }
}

