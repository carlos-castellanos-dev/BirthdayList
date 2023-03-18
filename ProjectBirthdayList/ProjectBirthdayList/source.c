#include <stdio.h>

int main() {

	char option;

	printf("Welcome to your Birthday List! \n");
	printf("Please select an option: \n");
	printf("List (L), Month (M), Add (A), Remove (R) \n ");
	scanf_s(" %c", &option, 1);
	printf("You have selected option: %c \n", option);


	if (option == 'L') {
		printf("List");
	}
	else if (option == 'M') {
		printf("Month");
	}
	else if (option == 'A') {
		printf("Add");
	}
	else if (option == 'R') {
		printf("Remove");
	}
	else {
		printf("Invalid Option");
	}















	return 0;
}