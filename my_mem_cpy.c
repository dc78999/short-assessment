#include <stdio.h>
#include <stdlib.h>

typedef struct String {
    char* array;
    int size;
} String;

int my_str_len(char* string){
    int len = 0;
    while (string[len]) {
        len++;
    }
    return len;
}

char* my_mem_cpy(char* orig) {
    // Declare char array and allocate memory
    

    // copy each char in orig array to result array, including null terminator
   

}

int main(int argc, char** argv) {

    char* orig = "Hello, World";
    char* result = my_mem_cpy(orig);

    printf("%s\n", result);

    return 0;
}