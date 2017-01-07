// Aaron Elsser
// Converts a number to roman numerals

#include <stdlib.h>
#include <stdio.h>

void numberconverter(int input){
	if (input < 1 || input > 4999) {
		printf("Invalid value entered. Program will exit.");
		exit(EXIT_FAILURE);
		}
	printf("The value of %d in Roman numerals is ", input);
while (input >= 1000) {
        printf("M");
        input -= 1000;        }
    while (input >= 900) {
        printf("CM");
        input -= 900;
    }
    while (input >= 500) {
        printf("D");
        input -= 500;
    }
    while (input >= 400) {
        printf("CD");
        input -= 400;
    }
    while (input >= 100) {
        printf("C");
        input -= 100;
    }
    while (input >= 90) {
        printf("XC");
        input -= 90;
    }
    while (input >= 50) {
        printf("L");
        input -= 50;
    }
    while (input >= 40) {
        printf("XL");
        input -= 40;
    }
    while (input >= 10) {
        printf("X");
        input -= 10;
    }
    while (input >= 9) {
       printf("IX");
        input -= 9;
    }
    while (input >= 5) {
        printf("V");
        input -= 5;
    }
    while (input >= 4) {
        printf("IV");
        input -= 4;
    }
    while (input >= 1) {
        printf("I");
        input -= 1;
    }
    printf("\n\nEnter a number between 1 and 4999: ");
    	fflush(stdout);
    	scanf("%d", &input);
    	numberconverter(input);
}


int main(){
	int input;
	printf("Enter a number between 1 and 4999: ");
	fflush(stdout);
	scanf("%d", &input);
	numberconverter(input);

return EXIT_SUCCESS;
}
