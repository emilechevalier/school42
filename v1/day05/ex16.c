#include "myLib.h"
#include <string.h>

char * ft_strcat(char * dest, char * src) {
    int i, j;

    i = 0;
    while(* (dest + i) != '\0') {
        i++;
    }
    j = 0;
    while (* (src + j) != '\0') {
        dest[i] = * (src + j);
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void) {
    char * src;
    char dest[20];
    src = "Emile";
    dest[0] = 'H';
    dest[1] = 'i';
    dest[2] = ',';
    dest[3] = ' ';
    dest[4] = '\0';
    ft_putstr(ft_strcat(dest, src));
    ft_putstr("\nReal function : ");
    ft_putstr(strcat(dest, src));
    ft_putchar('\n');
    return 0;
}
