//1. Write a program that convert a line to upper case. 



#include <stdio.h>
#include <string.h>

int main() {
    char line[100]; 
    
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin); // Read the input line
    
    // Convert the line to uppercase using strupr
    strupr(line);
    
    printf("Uppercase line: %s", line);
    
    return 0;
}
