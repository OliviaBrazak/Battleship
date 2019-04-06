///
///welcome screen for the battleship promts for username and password
///file:battleship_welcomescreen.c
///by: olivia brazak
///

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *welcome() {
	printf("XXX  X  XXX XXX X   xxx  XXX X X X XXX \n");
	printf("X X X X  X   X  X   x    X   X X X X X \n");
	printf("XX  XXX  X   X  X   xxx  XXX XXX X XXX \n");
	printf("X X X X  X   X  X   x      X X X X X   \n");
	printf("XXX X X  X   X  XXX xxx  XXX X X X X   \n");
}

char username_check(char* username, char** usernames, int num_usernames) {
	for(int i = 0; i < num_usernames; i++) {
		if(!strcmp(username, usernames[i])) {
			return i;
		}
	}
	return -1;
}


char password_check(char* password, char** passwords, int num_passwords) {
	for( int i = 0; i < num_passwords; i++) {
		if(!strcmp(password, passwords[i])) {
			return i;
		}
	}
	return -1;
}


void main(int argc, char **argv) {
	char **usernames = malloc(sizeof(char*) * 5);
	usernames[0] = "Sostre";
	usernames[1] = "Olivia";
	usernames[2] = "Collin";
	usernames[3] = "Vivian";
	usernames[4] = "Zack";

	char **passwords = malloc(sizeof(char*) * 5);
	passwords[0] = "Sostre";
	passwords[1] = "Olivia";
	passwords[2] = "Collin";
	passwords[3] = "Vivian";
	passwords[4] = "Zack";

	char* username = calloc(sizeof(char), 37);
	char* password = calloc(sizeof(char), 37);

	welcome();
	
	printf("Username:");
	scanf("%s", username);
	char result = username_check(username, usernames, 5);
	printf("%c", result);

	if(result >= -1){
		printf("Name is in the list\n");
		printf("Enter Password: \n");
		scanf("%s", password);

		char result2 = password_check(password, passwords, 5);
		printf("%c", result);

		if(result2 == result ){
			printf("Logged In\n");
		}
		else{
			printf("Wrong Password\n");

		}	
	}
	else {
		printf("Name is not in the list\n");
		//create account
	}

	
}


