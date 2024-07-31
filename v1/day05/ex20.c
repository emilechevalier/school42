#include "myLib.h"
#include <stdlib.h>

int ft_str_length(char * str) {
    int i = 0;
    while (* (str + i) != '\0') {
        i++;
    }
    return i;
}


int ft_strcmp(char * s1, char * s2) {
    int i, result;

    i = 0;
    result = 0;
    while (* (s1 + i) != '\0' && * (s2 + i) != '\0') {
        if (* (s1 + i) == * (s2 +i)) {
            i++;
        } else {
            return * (s1 + i) - * (s2 + i);
        }
    }
    return * (s1 + i) - * (s2 + i);
}


void ft_putbinary_pos(int nb, int is_first) {
    if (is_first == 1) {
        ft_putchar('0');
    }
    if (nb / 2 > 0) {
        ft_putbinary_pos(nb / 2, 0);
        ft_putchar((nb % 2) + 48);
    } else {
        ft_putchar((nb % 2) + 48);
    }
}

void str_pop_char_value(char *str, char c) {
    /**
     * Take a string and add a character c at the end. Add an '\0' after this char.
     * If str not long enough return -1
     */
    int i = 0;
    while (* (str + i) != '\0') {
        i++;
    }
    str[i] = c;
    str[i + 1] = '\0';
}

char * ft_padding_binary_nb(char * to_pad, char c, int nb) {
    /***
     * Parameters :
     * -    to_pad = ptr to string to pad
     * -    c = char to put in front
     * -    nb = limit until which to_pad is padded
     */
    int i, j, length, is_neg;
    char * str_padded;
    is_neg = 0;
    if (* (to_pad) == '1') {
        is_neg = 1;
    }
    str_padded = malloc((nb + 1) * sizeof(char));
    i = 0;
    j = 0;
    while (* (to_pad + i) != '\0') {
        i++;
    }
    length = i;
    i = 0;
    //Padding and copying value in str
    while(i <= nb) {
        if (is_neg == 1 && i == 0) {
            * (str_padded) = '1';
        } else if (nb - length - i > 0) {
            * (str_padded + i) = c;
        } else {
            if (is_neg == 1) {
                * (str_padded + i) = '0';
                is_neg = 0;
            } else {
                * (str_padded + i) = to_pad[j];
            }
            j++;
        }
        i++;
    }
    return str_padded;
}


void ft_return_binary_pos(int nb, int is_first, char * str) {
    /***
     * take a decimal nb and an empty string of length 9;
     * modify the ptr char with the binary representation of the decimal number.
     */
    if (is_first == 1) {
        //ft_putchar('0');
        str_pop_char_value(str, '0');
    }
    if (nb / 2 > 0) {
        ft_return_binary_pos(nb / 2, 0, str);
        //ft_putchar((nb % 2) + 48);
        str_pop_char_value(str, (nb % 2) + 48);
    } else {
        //ft_putchar((nb % 2) + 48);
        str_pop_char_value(str, (nb % 2) + 48);
        return;
    }
}


char * ft_binary_calculation(char * nb1, char * nb2, int nb_bits) {
    int i, j, total_length, retenue, temp_nb1, temp_nb2;
    char * result, temp, * padded_nb1, * padded_nb2, * cpy;
    if (ft_str_length(nb1) < nb_bits || ft_str_length(nb2) < nb_bits) {
        ft_putstr("erreur in binary calculation - nbs has'nt have required length\n");
        return "-1";
    }
    i = nb_bits;
    result = malloc(nb_bits * sizeof(char));
    total_length = nb_bits;
    cpy = malloc((total_length + 1) * sizeof(char));
    j = 0;
    retenue = 0;
    // We can begin calculation
    i--;
    while (i >= 0) {
        temp_nb1 = * (nb1 + i) - 48;
        temp_nb2 = * (nb2 + i) - 48;
        temp_nb1 = temp_nb1 + retenue;
        if (temp_nb1 + temp_nb2 == 0) {
            retenue = 0;
            result[j] = 0 + 48;
        } else if (temp_nb1 + temp_nb2 == 1) {
            retenue = 0;
            result[j] = 1 + 48;
        } else if (temp_nb1 + temp_nb2 == 2) {
            retenue = 1;
            result[j] = 0 + 48;
        } else {
            retenue = 1;
            result[j] = 1 + 48;
        }
        i--;
        j++;
    }
    result[total_length] = '\0';
    // We have the result in the wrong order - need to reverse the str
    j = total_length;
    i = 0;
    j--;
    while (j >= 0) {
        temp = * (result + j);
        cpy[i] = temp;
        i++;
        j--;
    }
    cpy[i] = '\0';
//    ft_putstr(cpy);
    free(result);
    return cpy;
}

void bitwise_complement(char * binary_nb) {
    /***
     * Take a binary nb and perform a bitwise complement on this binary nb;
     */
     int str_length, i;
     char temp;
     str_length = ft_str_length(binary_nb);
     i = 0;
     while (i < str_length) {
         temp = * (binary_nb + i);
         if (temp == '0') {
             binary_nb[i] = '1';
         } else if (temp == '1') {
             binary_nb[i] = '0';
         } else {
             ft_putstr("Error in function bitwise complement");
         }
         i++;
     }
}

void ft_putbinary_neg(int nb, int is_first) {
    /***
     * take a negative decimal nb and print its binary 2-complements representation
     */
    char * binary_representation, * digit_one, * result, * padded_nb;
    digit_one = "00000001";
    binary_representation = malloc(8 * sizeof(char));
    binary_representation[0] = '\0';
    nb = nb * - 1;
    ft_return_binary_pos(nb, is_first, binary_representation);
    padded_nb = ft_padding_binary_nb(binary_representation, '0', 8);
    bitwise_complement(padded_nb);
    result = ft_binary_calculation(padded_nb, digit_one, 8);
    ft_putstr(result);
    free(result);

}

void ft_puthexadecimal(int nb) {
    if (nb < 0) {
        nb = nb * -1;
        ft_putchar('-');
    }
    if (nb < 10) {
        ft_putchar(nb + 48);
    } else if (nb < 16){
        ft_putchar(nb + 55);
    } else {
        ft_puthexadecimal(nb / 16);
        if (nb % 16 < 10) {
            ft_putchar(nb % 16 + 48);
        } else {
            ft_putchar(nb % 16 + 55);
        }
    }
}

void ft_putnbr_base(int nbr, char * base) {
    char * digit_base, * binary_base, * hexa_base, * octal_base;
    digit_base = "0123456789";
    binary_base = "01";
    hexa_base = "0123456789ABCDEF";
    octal_base = "poneyvif";

    int i, j, exist, is_digit, is_binary, is_hexa, is_octal;
    i = 0;
    j = 0;
    // gestion des erreurs
    while (* (base + i) != '\0') {
        exist = 0;
        while (* (base + j) != '\0') {
            if (* (base + i) == * (base + j)) {
                if (exist == 0) {
                    exist = 1;
                    j++;
                }
                else {
                    return;
                }
            }
            else if (* (base + i) == '+' || * (base + i) == '-') {
                        return;
            } else {
                j++;
            }
        }
        j = 0;
        i++;
    }
    if (i == 0 || i == 1) {
        return;
    }
    ft_putstr("Démarrage de l'algo\n");
    is_digit = 0;
    is_binary = 0;
    is_hexa = 0;
    is_octal = 0;
    if (ft_strcmp(base, digit_base) == 0) {
        is_digit = 1;
        ft_putstr("Base is digit\n");
        ft_putnbr(nbr);
    } else if (ft_strcmp(base, binary_base) == 0) {
        is_binary = 1;
        ft_putstr("Base is binary\n");
        if (nbr >= 0) {
            ft_putbinary_pos(nbr, 1);
        } else {
            ft_putbinary_neg(nbr, 1);
        }

    } else if (ft_strcmp(base, hexa_base) == 0) {
        is_hexa = 1;
        ft_putstr("Base is hexadecimal\n");
        ft_puthexadecimal(nbr);
    } else if (ft_strcmp(base, octal_base) == 0) {
        is_octal = 1;
        ft_putstr("Base is octal\n");
    } else {
        ft_putstr("Base doesn't exist\n");
        return;
    }
 }


int main(void) {
    char * src, * nb2, * ans;
    src = "0123456789ABCDEF";
    ft_putnbr_base(-78, src);
    ft_putchar('\n');
}
