#include <stdio.h>
#include <stdlib.h>


int f_to_c(int farenheit) {
	// convert farenheit to celsius
	return (farenheit -32)*5/9;	

}

int main(int argc, char** argv){
	if (argc !=2){
		return 1;
	}
	// write your own test code here
	
	int farenheit = atoi(argv[1]);
	float celsius = f_to_c(farenheit);
	printf("%d Farenheit is equal to %.2f Celsius\n",farenheit, celsius);
		
	return 0;
}
