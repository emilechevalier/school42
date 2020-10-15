#include "myLib.h"

char * ft_strcpy(char *dest, char *src) {
    int i = 0;
    while (* (src + i) != '\0') {
        * (dest + i) = * (src + i);
        i++;
    }
    * (dest + i) = '\0';
    return dest;
}

int main(void) {
    char * src, dest[3];
    src = "Hi";
    ft_putstr(ft_strcpy(dest, src));
    ft_putchar('\n');
    return 0;
}
