//#include<stdio.h>
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
int n;
printf("Enter the number of strings: ");
scanf("%d", &n);
char s[n][MAX];
for (int i = 0; i < n; i++) {
printf("Enter string %d: ", i + 1);
scanf("%99s", s[i]);
}
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (strcmp(s[i], s[j]) > 0) {
char temp[MAX];
 strcpy(temp, s[i]);
strcpy(s[i], s[j]);
strcpy(s[j], temp);
}
 }
 }
printf("Sorted strings:\n");
 for (int i = 0; i < n; i++) {
 printf("%s\n", s[i]);
 }
 return 0;
}