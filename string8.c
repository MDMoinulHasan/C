#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char line[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, others = 0;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; i < strlen(line); i++) 
    {
        char c = tolower(line[i]); 
        if(c=='\n')
        {
        continue;
        }// Convert character to lowercase for easier vowel checking

        if (isalpha(c)) 
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        } 
        else if (isdigit(c)) 
        {
            digits++;
        } 
        else if (isspace(c)) 
        {
            spaces++;
        } 
        else 
        {
            others++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\nOthers: %d\n",
           vowels, consonants, digits, spaces, others);

    return 0;
}
