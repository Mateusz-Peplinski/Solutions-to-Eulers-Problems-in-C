#include <stdio.h>
#include <stdlib.h>

		//											--- The Problem ----
		// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
		//									1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
		//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.



int main() {

	//Starting Numbers 1 & 2
	int num1 = 1;
	int num2 = 2;

	int limit = 4000000;
	int newFnum = 0;
	int valCounter = 0;

	printf("%d, ", num2);
	for(int i = 0; i < limit; i++) {
		
		newFnum = num1 + num2;
		if (newFnum % 2 == 0) {
			printf("%d, ", newFnum);
		}
		

		if (valCounter == 0) {
			num1 = newFnum;
			valCounter++;
		}

		else if (valCounter == 1) {
			num2 = newFnum;
			valCounter = 0;
		}
		
		if (newFnum > limit) {
			break;
		}
	}

	return 0;
}

// Output: " 2, 8, 34, 144, 610, 2584, 10946, 46368, 196418, 832040, 3524578, "