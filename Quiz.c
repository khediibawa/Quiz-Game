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

}

void startGame() {
		
}

void rules() {
	
}
