#include <stdio.h>
#include <string.h>

int my_str_len(char* string) {

	//reinventing the wheel here
	int length =0;
	while(*string != '\0'){
		length ++;
		string ++;
	}
	return length;
}

int main(int argc, char** argv) {
	printf("%d\n", my_str_len("Four"));
	printf("%d\n", my_str_len(""));

	return 0;
}
