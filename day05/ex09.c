#include "myLib.h"

char * ft_lowercase(char *str) {
    int i;
    char temp;

    i = 0;
    while (* (str + i) != '\0') {
        i++;
    }
    i = 0;
    char cp[i+1];
    while (* (str + i) != '\0') {
        if (* (str + i ) >= 65 && * (str + i) <= 90) {
            temp = * (str + i);
            temp = temp + 32;
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
