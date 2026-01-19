#include <stdio.h>

// Function to calculate nPr (Permutation)
int nPr(int n, int r) {
    int result = 1;
    
    for (int i = 0; i < r; i++) {
        result *= n - i;
    }
    
    return result;
}

int main() {
    int n, r;

    printf("Enter two positive integers (n and r): ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0) {
        printf("Please enter positive integers.\n");
    } else if (r > n) {
        printf("r should be less than or equal to n.\n");
    } else {
        int result = nPr(n, r);
        printf("%dP%d = %d\n", n, r, result);
    }

    return 0;
}
