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


/*-----------------------------------
 * Menu Screen
 *-----------------------------------
 */

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
			startGame(); //starts the game
			break;
			
		case 2:
			rules(); //shows the rules
			break;
		
		case 3:
			system("cls"); //quits the program
			return;
			break;
		
		default :
			menu(); //switch case will keep on opening the menu page until the user puts a valid input
	}
}


/*-----------------------------------
 * Choice 1 = starts the game
 *-----------------------------------
 */

void startGame() {
		
}


/*-----------------------------------
 * Choice 2 = shows the game rules
 *-----------------------------------
 */

void rules() {
	
	printf("\n\n\t\t\t\t RULES \t\t\t");
	printf("\n********************************************************************************\n");
	printf("\n A question will be displayed with 4 options\n\n Press the key (A/B/C/D) corresponding to the correct answer according to you.\n\n For every right answer, you earn $100,000.\n\n If your answer is wrong, the game ends.\n\n Answer maximum number of questions correctly to achieve highest scores and\n become a millionaire\n");
	printf("\n********************************************************************************\n\n\n");
	
	printf("Press 0 to return to the main menu\n");
	printf("Press 1 to start the game\n");
	printf("Press 2 to exit the game\n");
	
	short int i; //variable to select one of the three choices above
	scanf("%hd",&i);
	
	switch(i) {
		case 0 :
			menu(); //displays the menu screen again
			break;
		
		case 1 :
			startGame(); //starts the game
			break;
		
		case 2:
			system("cls");
			return;
			break;
			
		default :
			rules(); //switch will keep on opening the rules page unless you enter a valid option
	}
}


