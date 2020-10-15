#include "myLib.h"

char * ft_strupcase(char *str) {
    int i;
    char temp;

    i = 0;

    while (* (str + i) != '\0') {
    	i++;
    }
    char cp[i+1];
    i = 0;
    while (* (str + i) != '\0') {
        if (* (str + i ) >= 97 && * (str + i) <= 122) {
            temp = * (str + i);
            temp = temp - 32;
            cp[i] = temp;
            i++;
        } else {
            cp[i] = * (str + i);
            i++;
        }
    }
    cp[i] = '\0';
    str = cp;
    return str;
}

int main(void) {
    char * src, *to_find;
    src = "utabus";
    //to_find = "uranus";
    ft_putstr(ft_strupcase(src));
    ft_putstr("\nReal function : ");
    //ft_putstr(strupcase(src));
    ft_putchar('\n');
    return 0;
}
