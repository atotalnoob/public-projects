#include <stdio.h>


int main() {
	int i, temp;

	printf("This program prints the numbers from 1 to 100.\n But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. \nFor numbers which are multiples of both three and five print FizzBuzz\n");
	for (i=0; i <= 100; i++) {
		printf("%i ", i);
		if (i % 3 == 0) {
			printf("Fizz");
		}
		if (i % 5 == 0) {
			printf("Buzz");
		}
		printf("\n");
	}


}