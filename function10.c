#include <stdio.h>

int lcm(int a, int b) {
    int k = (a > b) ? a : b; // Find the larger of the two numbers

    while (1) {
        if (k % a == 0 && k % b == 0) {
            return k;
        }
        k++;
    }
}

int main() {
    int x, y, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    c = lcm(x, y);
    printf("The LCM is %d\n", c);
    return 0;
}
