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
		printf("Choose an option:\n");
		printf("\t1. Happy Face\n");
		printf("\t2. Balanced Number\n");
		printf("\t3. Generous Number\n");
		printf("\t4. Circle Of Joy\n");
		printf("\t5. Happy Numbers\n");
		printf("\t6. Festival Of Laughter\n");
		printf("\t7. Exit\n");
		// get an inpute of the option
	    scanf("%d", &key);

		// make a switch - case for my menu
		switch (key) {
			// Happy Face - create a face with given symbols for eyes, nose and mouse.
			case(1):
				char eye, nose, mouth;
			int faceSize;
			printf("Enter symbols for the eyes, nose, and mouth:\n");
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
			// Get the size of the digits
			while (number!=0) {
				number/=10;
				counter++;
			}
			// if a number is one digit it is harmony
			if (counter==1)
				printf("This number is balanced and brings harmony!\n");
			else {
				// restore the number to origin.
				number=saveNumber;
				// sum the digits from the left to the middle.
				for (int i=0; i<(counter/2); i++) {
					sumL+=number%10;
					number/=10;
				}
				number=saveNumber;
				//set the number to be only the digits that right to the middle.
				for (int i=0; i<(counter/2); i++) {
					number/=10;
				}
				// if the number is with odd digits we want to skip the middle digit
				if (counter%2==1)
					number/=10;
				// sum the digts from the right to the middle.
				for (int i=0; i<(counter/2); i++) {
					sumR+=number%10;
					number/=10;
				}
				if (sumL==sumR)
					printf("This number is balanced and brings harmony!\n");
				else
					printf("This number isn't balanced and destroys harmony.\n");
			}
			break;

			case(3):
				printf("Enter a number:\n");
			scanf(" %d", &number);
			// while loop to make sure only positive number.
			while (number<1) {
				printf("Only positive number is allowed, please try again:\n");
				scanf("%d", &number);
			}
			int sum=0;
			/* run on all the numbers between 1 and the given number.
				if the given number modollo the other number is 0 then the  number is divided by this number.
				then we add the divider to a sum
			*/
			for (int i=1; i<number; i++) {
				if (number%i==0)
					sum+=i;
			}
			// if the sum of the dividers is greater then the number itself then the number is generous
			if (sum>number)
				printf("This number is generous!\n");
			else
				printf("This number does not share.\n");
			break;

			case(4):
				printf("Enter a number:\n");
			scanf(" %d", &number);
			// while loop to make sure only positive number.
			while (number<1) {
				printf("Only positive number is allowed, please try again:\n");
				scanf("%d", &number);
			}
			saveNumber = number;


			// run on all the numbers from 2-given number(exclude). if there is a divider in the way it means it isn't a prime number.
			int check;
			if (number>2) {
				for(int i=2; i<number; i++) {
					if (number%(i)==0) {
						printf("The circle remains incomplete.\n");;
						break;
					}
					check=i;
				}
				// if its less or equal to 2 (means 1/2) its a prime number
			} else
				printf("This number completes the circle of joy!\n");
			// exit if not a prime number
			if (check+1!=number) {
				break;
			}
			// enter the switch and individual check only if its prime number that bigger than 10
			if (number>10) {
				// Get the size of the digits
				counter=0;
				// every number we subtract we add one to the counter
				while (number!=0) {
					number/=10;
					counter++;
				}
				// switch the number
				number = saveNumber;
				int switchNum=0;
				int digit;
				// we take the right number each time, and add it to the new switched number after we multiply by 10 to shift the digits.
				while (number!=0) {
					digit = number%10;
					switchNum*=10;
					switchNum+=digit;
					number/=10;
				}
				// check the switched number.
				for(int i=2; i<switchNum; i++) {
					if (switchNum%(i)==0) {
						printf("The circle remains incomplete.\n");
						break;
					}
					check=i;
				}
				// exit if not a prime number
				if (check+1!=switchNum) {
					break;
				}
				// if a number run the whole program it completes the circle of joy
				printf("This number completes the circle of joy!\n");
				//else condition to an if condition from before that if a number is prime and single digits it also completes the circle of joy (skipped the switch and prime check)
			} else {
				printf("This number completes the circle of joy!\n");
			}
			break;

			case(5):
				printf("Enter a number:\n");
			scanf(" %d", &number);
			// while loop to make sure only positive number.
			while (number<1) {
				printf("Only positive number is allowed, please try again:\n");
				scanf("%d", &number);
			}
			// save the origin guven number
			int saveNunHappy = number;
			// keep the value of the checked number
			int iKeeper;
			// the sum of the squares of each digit
			int sumHappy=0;
			//flag to enter and exit the external loop
			int flagHappy;
			// print the basic statement
			printf("Between 1 and %d only these numbers bring happiness: ", number);
			// we will check the numbers until the given number.
			for (int i=1; i<=saveNunHappy; i++) {
				flagHappy = 1;
				iKeeper = i;
				// while loop that will run until the number will be under 10
				while (flagHappy) {
					// split the digits and add squares
					while (iKeeper!=0) {
						int digit = iKeeper%10;
						sumHappy+=(digit*digit);
						iKeeper/=10;
					}
					// save the result and reset the sum
					iKeeper=sumHappy;
					sumHappy = 0;
					/* if the result less than 10:
						if it's 1 or 7 (the happy numbers that under 10 - than the number is happy, we add him the output statement. and we'll move on to the following number.
						else it's not a happy number end we'll exit the loop and move on to the following number.
					*/
					if (iKeeper<10) {
						if (iKeeper == 1 || iKeeper == 7) {
							printf("%d ", i);
							flagHappy = 0;
						} else {
							flagHappy = 0;
						}
					}

				}
			}
			printf("\n");
			break;

			case(6):
			int smile, cheer, max;
			int verify;
			// clean previuse buffer
			scanf("%*[^\n]");
			scanf("%*c");
			//
			printf("Enter a smile and cheer number:\n");
			verify = scanf("smile: %d , cheer: %d", &smile, &cheer);

			while (verify!=2 || smile<1 || cheer<1 || smile == cheer) {
				printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
				scanf("%*[^\n]");
				scanf("%*c");
				verify = scanf("smile: %d , cheer: %d", &smile, &cheer);
			}
			printf("Enter maximum number for the festival:\n");
			scanf("%d", &max);
			while (max<1) {
				printf("Only positive maximum number is allowed, please try again:\n");
				scanf("%d", &max);
			}
			for (int i=1; i<=max; i++) {
				if (i % smile == 0 && i % cheer == 0)
					printf("Festival!\n");
				else if (i % smile == 0)
					printf("Smile!\n");
				else if (i % cheer == 0)
					printf("Cheer!\n");
				else
					printf("%d\n", i);
			}




			break;
		default:
			// 7 for eixt
		    if (key == 7) {
					printf("Thank you for your journey through Numeria!\n");
		    		// turn off the main loop
		    		flag = 0;
			// if the given number is not on the menu
		    }else
			    printf("This option is not available, please try again.\n");
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


