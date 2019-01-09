#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*---------------------------------
 * Functions Declaration 
 *---------------------------------
 */

void welcome();
void menu();
void startGame();
void rules();


/*----------------------------------
 * Main method
 *----------------------------------
 */

int main() {
    welcome();
    return 0;
}

/*-----------------------------------
 * Welcome screen 
 * Enter name and choice
 *-----------------------------------
 */


void welcome() {
	char name;
	printf("\n*******************************************************************************");
	printf("\n\n\t\t\t\t   WELCOME \t\t\t");
	printf("\n\n\t\t\t\t     TO \t\t\t");
	printf("\n\n\t\t\tWHO WANTS TO BE A MILLIONAIRE\t\t\t");
	printf("\n\n********************************************************************************\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n  ENTER YOUR NAME  :  ");
	scanf("%c", &name); //saves name
	menu();
}


void menu() {
	system("CLS"); //clears the screen

	printf("\n\n\n\n\t1. START GAME\t\n"); 
	printf("\n\t2.RULES\t\n");
	printf("\n\t3. QUIT\t\n");
	
	printf("\n\n\n\n\n\nEnter your choice : ");
	short int choice; //variable to select one of the three choices above
	scanf("%hd", &choice);
	
	switch(choice) {
		case 1:
			startGame();
			break;
			
		case 2:
			rules();
			break;
		
		case 3:
			system("cls");
			return;
			break;
		
		default :
			menu(); //switch case will keep on opening the menu page until the user puts a valid input
	}
}

void startGame() {
		
}

void rules() {
	
}
