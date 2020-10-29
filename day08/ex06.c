#include <stdlib.h>
#include "ft_stock_par.h"
#include "myLib.h"

void ft_print_words_table(char ** tab) {
    int i;

    i = 0;
    while(tab[i][0] != 0) {
        ft_putstr(tab[i]);
        ft_putchar('\n');
        i++;
    }
    free(tab);
}

void ft_show_tab(struct s_stock_par *par) {
    int i;
    i = 0;
    while (par[i].copy != 0) {
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        ft_putnbr(par[i].size_param);
        ft_putchar('\n');
        ft_print_words_table(par[i].tab);
        i++;
    }
    free(par);
}
