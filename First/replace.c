#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replace(char *input) {
    int length = strlen(input);
    char *output = malloc(length + 1);

    for (int i = 0; i < length; i++) {
        switch (input[i]) {
            case 'a':
                output[i] = '6';
                break;
            case 'e':
                output[i] = '3';
                break;
            case 'i':
                output[i] = '1';
                break;
            case 'o':
                output[i] = '0';
                break;
            default:
                output[i] = input[i];
        }
    }

    output[length] = '\0';
    return output;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./replace <input>\n");
        return 1;
    }

    char *converted = replace(argv[1]);
    printf("%s\n", converted);
    free(converted);
    return 0;
}
