#include "myLib.h"

int ft_str_is_uppercase(char * str) {
    int i;
    char temp;
    i = 0;
    //Calcul de la longueur de la chaine initiale
    while (* (str + i) != '\0') {
        i++;
    }
    if (i == 0) {
        return 1;
    }
    i = 0;
    while (* (str + i) != '\0') {
        temp = * (str + i);
        if ((temp >= 65 && temp <= 90 ) || temp == '\0') {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
