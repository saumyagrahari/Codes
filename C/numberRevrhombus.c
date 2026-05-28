#include <stdio.h>
int main() {
    int n = 5;  // height of the upper half
    // upper half
    for (int i = 1; i <= n; i++) {
        for (int s = n - i; s > 0; s--) printf("   "); // spaces
        int val = i;
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", val);
            if (j < i) val++;
            else val--;
        }
        printf("\n");
    }
    // lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = n - i; s > 0; s--) printf("   "); // spaces
        int val = i;
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", val);
            if (j < i) val++;
            else val--;
        }
        printf("\n");
    }

    return 0;
}