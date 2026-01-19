//10. Write a program that read a line of text and display the frequency of every character


#include <stdio.h>
#include <string.h>

int main() 
{
    char input[100];
    int frequency[128] = {0}; // Assuming ASCII characters (0-127)

    printf("Enter a line of text: ");
    fgets(input, sizeof(input), stdin);

    // Calculate and display character frequencies
    for (int i = 0; i < strlen(input); i++) 
    {
        char currentChar = input[i];
        if (currentChar >= 0 && currentChar <= 127) 
        {
            frequency[currentChar]++;
        }
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 128; i++) 
    {
        if (frequency[i] > 0) 
        {
            printf("'%c' : %d times\n", i, frequency[i]);
        }
    }

    return 0;
}
