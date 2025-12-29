/*#include <stdio.h>
#include <string.h>

int strlen(char str[]) {
    int i = 0, count;

   // char c = str[i];

    while (c!= '\0')
    {
       c= str[i];
       i++;
    }
    count = i-1;
    return count;

}

int main() {
    char str[] = "Aatif";

    printf("%d",strlen(str));
    
    return 0;
}*/

#include <stdio.h>
#include <string.h>

int my_strlen(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    char str[] = "Aatif";

    printf("%d", my_strlen(str));

    return 0;
}
