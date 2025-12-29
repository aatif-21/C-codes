#include <stdio.h>
#include <string.h>

char* slice(char str[], int m, int n) { // kyu ki character pointer return lr rahe hai 
    int i = 0 , count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}

int main() {
    char str[] ="Aatif bhai";

    printf("%s", slice(str, 2,7));
    return 0;
}