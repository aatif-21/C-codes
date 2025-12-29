#include <stdio.h>
#include <string.h>

int main() {
    char c = 'z';
    int count = 0;
    char str[] = "genz";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c) {
            count++;
        }
    }
    printf("%s", count);
    
    return 0;
}