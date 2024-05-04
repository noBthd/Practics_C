#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <wchar.h>

int main() {
    const wchar_t str[] = L"test ATest etest tESt";
    int counter = 0;

    for(int i = 0; i < wcslen(str); i++) {
        if (iswspace(str[i]) && wcschr(L"aeyuioAEYUIO", str[i+1])) 
            counter++;
    }

    printf("%i", counter);
    return 0;
}
