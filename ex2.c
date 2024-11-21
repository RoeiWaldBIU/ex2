/******************
Name: Roei Wald
ID: 211589791
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
	int key;
	int flag = 1;
	// make a while loop that will run over and over on my Numeria program (flag=1). exit when will enter 7 (flag=0)
	while (flag){
		printf("Choose an option:\n\
		1. Happy Face\n\
		2. Balanced Number\n\
		3. Generous Number\n\
		4. Circle Of Joy\n\
		5. Happy Numbers\n\
		6. Festival Of Laughter\n\
		7. Exit\n");
		// get an inpute of the option
	    scanf("%d", &key);


		// make a switch- case for my menu
		switch (key) {
		// Happy Face - create a face with given symbols for eyes, nose and mouse.
		case(1):
			char eye, nose, mouth;
            int faceSize;
            printf("Enter a symbols for the eyes, nose, and mouth\n");
            scanf(" %c %c %c",  &eye, &nose, &mouth );

            printf("Enter face size:\n");
            scanf("%d", &faceSize);
			// while loop to make sure the given number for face size is an odd and possitive number.
            while(faceSize%2==0 || faceSize<1) {
                printf("The face's size must be an odd and positive number, please try again:\n");
                scanf("%d", &faceSize);
            }
            // print the eyes
            printf("%c", eye);
            for (int i=0; i<faceSize; i++)
                printf(" ");
            printf("%c\n", eye);
            // print the nose
            for (int i=0; i<((faceSize/2)+1); i++)
                printf(" ");
            printf("%c\n", nose);
            // print the mouth
            printf("\\");
            for(int i=0; i<faceSize; i++)
                printf("%c", mouth);
            printf("/\n");

			break;
		// Balanced Number
		case(2):
			int number, counter=0, sumR=0, sumL=0;
			printf("Enter a number:\n");
			scanf(" %d", &number);
			// while loop to make sure only positive number.
			while (number<1) {
				printf("Only positive number is allowed, please try again:\n");
				scanf("%d", &number);
			}
			int saveNumber = number;
			while (number!=0); {
				number/=number;
				counter++;
			}
			for (int i=0; i<(counter/2); i++)


			break;
		case(3):
			printf("Generous Number\n");



			break;
		case(4):
			printf("Circle Of Joy\n");



			break;
		case(5):
			printf("Happy Numbers\n");



			break;
		case(6):
			printf("Festival Of Laughter\n");





			break;
		default:
		    if (key == 7) {
                        printf("Thank you for your journey through Numeria!\n");
                        flag = 0;
			}else
			    printf("This option is not available, please try againn\n");
			break;
			}
		}
	}



	// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
	/* Example:
	* n = 3:
	* 0   0
	*   o
	* \___/
	*/


	// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
	// and the sum of all digits to the right of the middle digit(s) are equal
	/* Examples:
	Balanced: 1533, 450810, 99
	Not blanced: 1552, 34
	Please notice: the number has to be bigger than 0.
	*/


	// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
	/* Examples:
	Abudant: 12, 20, 24
	Not Abudant: 3, 7, 10
	Please notice: the number has to be bigger than 0.
	*/

	// Case 4: determine wether a number is a prime.
	/* Examples:
	This one brings joy: 3, 5, 11
	This one does not bring joy: 15, 8, 99
	Please notice: the number has to be bigger than 0.
	*/


	// Happy numbers: Print all the happy numbers between 1 to the given number.
	// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
	/* Examples:
	Happy :) : 7, 10
	Not Happy :( : 5, 9
	Please notice: the number has to be bigger than 0.
	*/

	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/


