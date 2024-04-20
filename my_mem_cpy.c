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
    char* array = (char*)malloc(my_str_len(orig) * sizeof(char*));

    // copy each char in orig array to result array, including null terminator
    for (int i = 0; i < my_str_len(orig); i++){
        array[i] = orig[i];
    }

    return array;
}

int main(int argc, char** argv) {

    char* orig = "Hello, World";
    char* result = my_mem_cpy(orig);

    printf("%s\n", result);

    return 0;
}