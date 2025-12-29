#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Nfsf!qj{{b!lb!mbtu!tmjdf!hibs!qf!ibj";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s", str);
    
    return 0;
}