#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
char choose , menu ;

main(){
	printf("________________________________________________________________\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	printf("|_______________________________________________________________|\n");
	
	printf("Do your wanna food [y/n] : ");
	choose=getch();
	printf("%c",choose);
	if(choose = 'y'){
	while(menu != 'q'){
	printf("\nInser your menu: ");
	menu=getch();
	if(menu == 'a'){
	 printf("a 10 B.")	;
	}
	else if(menu == 'b'){
	 printf("b 20 B.")  ;
	}
	else if(menu == 'c'){
	 printf("c 30 B.")  ;
	}
	else if(menu == 'q'){
	 printf("menu = ");
	 printf("sum= ");
	 printf("Thx = ");
	}	
		}

	}

}


	
