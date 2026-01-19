 //Write a program that convert a line to lower case


 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char line[100];
    printf("Enter a line\n");
    fgets(line, sizeof(line), stdin);
    strlwr(line);
    printf("%s", line);



  return 0;
 }