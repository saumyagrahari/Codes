#include <stdio.h>
void processString(char str[]) {
    int len = 0;
    // Calculate length
    while (str[len] != '\0') len++;
    printf("Length: %d\n", len);
    // Reverse string
    int i = 0, j = len - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string: ");
    i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    // Copy string
    char dest[100];
    i = 0;
    while (str[i] != '\0') {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    printf("Copied string: %s\n", dest);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Original string: %s\n", str);
    processString(str);
    return 0;
}