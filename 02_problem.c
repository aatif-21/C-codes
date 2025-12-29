#include <stdio.h>
#include <string.h>

int main() {
    char str[6];
    /*scanf("%s", str);

    printf("%s",str);*/

    for (int i = 0; i < 6; i++)
    {
      scanf("%c", &str[i]);
      fflush(stdin);
       // is code me ek problem a sakti hai jo ki agr ham yaha enter click kr rahe to wo usko bhi count
      // count kr raha hai isko over come krne ke lie ham use krenge fflus(stdin);
    }
    printf("%s",str);
    
    return 0;
}