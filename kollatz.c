#include <stdio.h>
#include <stdlib.h>


// Refresher on the kollatz conjecture:

/*

    We start with a number > 1.

        If the number is even, we divide it by two

        If it is odd, we multiply it by 3 and add 1. 

    That is one step.

    Repeat and count steps until we reach 1.

*/


int isEven(int num) {
    if (num % 2 == 0) {
		return 1;
	}
    
    else {
		return 0; 
	}
}

int kollatz(int num) {

    int steps = 0;

	while (num != 1) {
		if (isEven(num) == 1) {

			printf("%d\n", num);
            num /= 2;
			steps++;
			printf("%d\n", num);
		}
        else if (isEven(num) == 0) {
			printf("%d\n", num);
			num *= 3;
			num++;
			steps++; 
			printf("%d\n", num);
		}
	}

	return steps; 
}

int main(void) {

	int num;

	printf("Please input a number greater than 1: ");
	scanf("%d", &num);
	printf("It took %d steps to apply the Kollatz conjecture to this number.\n", kollatz(num));

	return 0;
} 