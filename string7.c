/*Write a program that read a line of text and display number of upper case, lower 
case, digit, space, and other character*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[100];
    int uppercase = 0, lowercase = 0, digits = 0, spaces = 0, others = 0;

    printf("Enter a line of text:");
    fgets(line, sizeof(line), stdin);

    int length = strlen(line);

    for (int i = 0; i < length; i++) {
        char c = line[i];
        if (c == '\n') {
            // Skip newline character
            continue;
        } else if (isupper(c)) {
            uppercase++;
        } else if (islower(c)) {
            lowercase++;
        } else if (isdigit(c)) {
            digits++;
        } else if (isspace(c)) {
            spaces++;
        } else {
            others++;
        }
    }

    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Other characters: %d\n", others);

    return 0;
}
