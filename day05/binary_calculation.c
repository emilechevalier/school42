#include <stdlib.h>
#include "myLib.h"

char * ft_binary_calculation(char * nb1, char * nb2) {
    int i, j, total_length, retenue, temp_nb1, temp_nb2;
    char * result, * cpy;
    i = 0;
    j = 0;
    while (* (nb1 + i) != '\0') {
        i++;
    }
    while (* (nb2 + j) != '\0') {
        j++;
    }
    if (i > j ) {
        result = malloc(i * sizeof(char));
        total_length = i;
    } else {
        result = malloc(j * sizeof(char));
        total_length = j;
    }
    cpy = result;
    i = 0;
    j = 0;
    retenue = 0;
    // We can begin calculation
    while (* (nb1 + i ) != '\0') {
        temp_nb1 = * (nb1 + i) - 48;
        temp_nb2 = * (nb2 + i) - 48;
        temp_nb1 = temp_nb1 + retenue;
        if (temp_nb1 + temp_nb2 == 0) {
            retenue = 0;
            result[i] = 0;
        } else if (temp_nb1 + temp_nb2 == 1) {
            retenue = 0;
            result[i] = 1;
        } else if (temp_nb1 + temp_nb2 == 2) {
            retenue = 1;
            result[i] = 0;
        } else {
            retenue = 1;
            result[i] = 1;
        }
        i++;
    }
    result[i] = '\0';
    // We have the result in the wrong order - need to reverse the str
    j = total_length;
    i = 0;
    while (j != 0) {
        cpy[j - 1] = * (result + i);
        i++;
        j--;
    }
    ft_putstr(result);
    free(result);
    return cpy;
}


int main(void) {
    char * src, * nb2;
    src = "0011";
    nb2 = "0000";
    //ft_putnbr_base(1, src);
    ft_binary_calculation(src, nb2);
//    char dest[20];
//    src = "Emile";
//    dest[0] = 'H';
//    dest[1] = 'i';
//    dest[2] = ',';
//    dest[3] = ' ';
//    dest[4] = '\0';
//    dest = "Bonjour";
//    ft_putstr(ft_strncat(dest, src, 2));
//    ft_putstr("\nReal function : ");
//    ft_putstr(strncat(dest, src, 3));
//    ft_putchar('\n');
    return 0;
}
