#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    const char str[] = "test ATest etest tESt";
    int counter = 0;

    for(int i = 0; i < strlen(str); i++) {
        if (isspace(str[i]) && strchr("aeyuioAEYUIO", str[i+1])) 
            counter++;
    }

    printf("%i", counter);
    return 0;
}
