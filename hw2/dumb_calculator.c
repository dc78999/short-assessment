#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int do_operation(int num1, char operation, int num2){
	if (operation == '-'){
		return num1 - num2;
	} else if (operation == '+'){
		return num1 + num2;
	} else if (operation == '*'){
		return num1 * num2;
	} else if (operation == '/'){
		return num1 / num2;
	} else {
		exit(3);
	}

}

int main(int argc, char** argv) {
	int num1,num2;
	char operation;
	num1 = atoi(argv[2]);
	num2 = atoi(argv[3]);
	operation = argv[1][0];

	int result = do_operation(num1,operation,num2);
	printf("Result:%d\n", result);


	if (argc != 4) {
		return 1;
	}

	// take the first character (index 0) as the operator
	
	// convert a string into int
	

	// check if both operands are positive
	

	// print the result
}


