#include <stdio.h>
#include <stdlib.h>

int done[25];

/*---------------------------------
 * Functions Declaration 
 *---------------------------------
 */

void welcome();
void startGame();
void rules();
void highScores();
void quit();


/*----------------------------------
 * Main method
 *----------------------------------
 */
 
int main(int argc, char const *argv[]) {
    //initialise done to 0
    for(int i = 0; i < 10; i++) {
        done[i] = 0;
    }
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
	printf("\n\n\t\t\t\t   WELCOME \t\t\t");
	printf("\n\n\t\t\t\t     TO \t\t\t");
	printf("\n\n\t\t\tWHO WANTS TO BE A MILLIONAIRE\t\t\t");
	
	printf("\n\n\n\n\n\n\n\n\n\n\n  ENTER YOUR NAME  :  ");
	scanf("%c",&name); //saves name
	
	printf("\n\n\n\n\n\n\n\t1. START GAME\t\n");
	printf("\n\t2. RULES\t\n");
	printf("\n\t3. HIGHSCORE\t\n");
	printf("\n\t4. QUIT\t\n");
	
	int choice; //variable i to select one of the four choices above
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			startGame();
			break;
			
		case 2:
			rules();
			break;
		
		case 3:
			highScores();
			break;
			
		case 4:
			quit();
			break;
	}
}

/*--------------------------------
 * choice 1 = starts the game
 *--------------------------------
 */
 
void startGame() {
	
}
























