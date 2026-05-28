#include <stdio.h>
#include <unistd.h>
#include <windows.h> 
void printWithDelay(const char *str, int delay) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
        fflush(stdout);
        #ifdef _WIN32
            Sleep(delay);
        #else
            usleep(delay * 1000);
        #endif
    }
    printf("\n");
}
int main() {
     printf("\n*******************************************\n");
    printf("*                                         *\n");
    printf("*           HAPPY BIRTHDAY JAAN           *\n");
    printf("*                                         *\n");
    printf("*******************************************\n\n");
    printWithDelay(" Happy Birthday Baby ", 150);
    printf("\n  Wishing you lots of joy & love. \n");
    printf("\n  Love you Tiwari Ji  \n");
     printf("\n  To my partner, my best friend, and my soulmate: may your day be as beautiful and kind as your heart is. I love you more than words can say.  \n");
      printf("\n  Every day with you feels like a gift, but today is extra special because it the day the world got you.  \n");
      printf("\n  Happy birthday to the person who makes my world brighter just by being in it. I am so grateful for every moment we share.  \n");
      printf("\n Cheers to another year of making memories together. Happy birthday, My Handsome!  \n");
      printf("\n  Another year older, another year bolder, and another year more in love with you.Ummmmmmaaaaaaahhhhhhhhhh  \n");
        return 0;
    }