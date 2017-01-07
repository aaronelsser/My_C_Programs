// Aaron Elsser
// Basic auto-correct program, fixes capital letters and removes extra spaces

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void read_and_capitalize() {
	 char c;
	 c = getchar();

	 while(c != '\n') {

		 if (isspace(c)) { //for space
			 for (;;) {
			c = getchar();
		        if (isspace(c)) {
					 break;
		        } else {
		        printf(" ");
		        c = toupper(c);
				printf("%c", c);
			      for (;;) {
			      c = getchar();
			      if (isspace(c)) {
				  break;
			      } else {
			      c = tolower(c);
				  printf("%c", c);
			   }
		  }
	 }
}

		 	 	} else {

			    	c = toupper(c); //for characters that aren't space
			        printf("%c", c);
					for (;;) {
					c = getchar();
				    if (isspace(c)) {
					break;
					} else {
					c = tolower(c);
					printf("%c", c);
		}
	  }
	}
  }
}

int main(void) {

	printf("Enter a line of text: ");
	fflush(stdout);
	read_and_capitalize();
	return EXIT_SUCCESS;
} /*main*/
