#include "myLib.h"

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


void ft_putstr_non_printable(char *str) {
    char * hexa;
    int i;

    i = 0;
    while (* (str + i) != '\0') {
//        ft_putstr("char is : ");
//        ft_putchar(* (str + i));
//        ft_putchar('\n');
        if ((* (str + i) >= 31 && * (str + i) <= 91) || (* (str + i) >= 93 && * (str + i) <= 126)) {
            ft_putchar(* (str + i));
        }
        else if (* (str + i) == 92){
            ft_putchar(92);
            if (* (str + i + 1) == 'n')
                ft_puthexadecimal('\n');
            else if (* (str + i + 1) == 't')
                ft_puthexadecimal('\t');
            else if (* (str + i + 1) == 'r')
                ft_puthexadecimal('\r');
            else if (* (str + i + 1) == 'v')
                ft_puthexadecimal('\v');
            }
        else {
            ft_putchar(92);
            ft_puthexadecimal(* (str + i + 1));
        }
        i++;
    }
}

int main(void) {
    char * src, * nb2, * ans;
    src = "Coucou\\ntu vas bien ?";
    ft_putstr_non_printable(src);
    ft_putchar('\n');
}
