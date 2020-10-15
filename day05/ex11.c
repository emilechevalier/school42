#include "myLib.h"

int ft_str_is_alpha(char *str) {
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
        if (temp < 48 || temp > 122 || (temp > 90 && temp < 97 )) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char * src;
    src = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    //to_find = "uranus";
    ft_putnbr(ft_str_is_alpha(src));
    //ft_putstr("\nReal function : ");
    //ft_putstr(strupcase(src));
    ft_putchar('\n');
    return 0;
}
