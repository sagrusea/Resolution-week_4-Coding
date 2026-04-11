#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 1024

int main(int argc, char *argv[]) {
    char *fileName = "test.txt";
    if (argv[1]){
        fileName = argv[1];
    }
    
    FILE *filePointer = fopen(fileName, "r");
    char buffer[LINE_LENGTH];
    int lines = 0, words = 0;
    char lastChar = ' ';

    while (fgets(buffer, sizeof(buffer), filePointer) !=  NULL) {
        lines++;
        for (size_t  i = 0; buffer[i] != '\0'; i++) {
            const char current = buffer[i];

            if (lastChar == ' ' || lastChar == '\n') {
                words++;
            }
            lastChar = current;
        }
    };
    
    
    printf("Lines: %d \nWords: %d", lines, words);
    return 0;
}
