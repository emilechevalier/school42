#include "myLib.h"

char    *ft_strcapitalize(char * str) {
    int i, new_word;
    char temp;
    i = 0;
    new_word = 1;
    //Calcul de la longueur de la chaine initiale
    while (* (str + i) != '\0') {
        i++;
    }
    char str_copy[i+1];
    i = 0;
    while (* (str + i) != '\0') {
        temp = * (str + i);
        if (new_word == 1 && temp >= 97 && temp <= 122) {
            temp = temp - 32;
            str_copy[i] = temp;
            new_word = 0;
            i++;
        } else if (temp < 48 || temp > 122 || (temp > 90 && temp < 97 )) {
            str_copy[i] = temp;
            new_word = 1;
            i++;
        } else {
            str_copy[i] = temp;
            i++;
        }
    }
    str = str_copy;
    return str;
}
