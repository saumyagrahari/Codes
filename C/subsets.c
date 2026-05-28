#include <stdio.h>
#include <string.h>

int main() {
    char set[20];
    int n;

    printf("Enter the set of characters (no spaces): ");
    scanf("%s", set);

    n = strlen(set);

    int totalSubsets = 1 << n;  // 2^n subsets

    printf("All subsets of the given set:\n");
    for (int mask = 0; mask < totalSubsets; mask++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) {  // check if j-th bit is set
                printf("%c ", set[j]);
            }
        }
        printf("}\n");
    }
    return 0;
}