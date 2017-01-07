//Aaron Elsser
//Just a basic program converting C to F and F to C
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


int main(void) {
    float cels = 0.0;
    float fahr = 0.0;
    fflush(stdout);
    printf("Enter a temperature in celsius: ");
    scanf("%f", &cels);
    fahr = cels * 9.0 / 5.0 + 32;
    printf("%.1f degrees C = %.1f degrees F\n", cels, fahr);
    fflush(stdout);
    printf("Enter a temperature in fahrenheit: ");
    cels = 0.0;
    fahr = 0.0;
    scanf("%f", &fahr);
    cels = ((fahr-32)*5.0)/9.0;
    printf("%.1f degrees F = %.1f degrees C\n", fahr, cels);

	return EXIT_SUCCESS;
} /*main*/
