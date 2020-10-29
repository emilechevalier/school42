#include "myLib.h"
#include "ft_stock_par.h"
#include <stdlib.h>

struct	s_stock_par * ft_param_to_tab(int ac, char **av) {

    int i, j, word_length;
    char **temp;
    t_stock_par * stockage;

    i = 0;
    stockage = (struct s_stock_par *) malloc((ac + 1) * sizeof(struct s_stock_par));
    if (stockage == NULL)
        return 0;
    while (i < ac) {
        word_length = ft_strlen(av[i]);
        stockage[i].copy = (char *) malloc((word_length + 1) * sizeof(char));
        stockage[i].size_param = word_length;
        j = 0;
        stockage[i].str = (char *) malloc(17 * sizeof(char));
        stockage[i].str = &av[i][j];
        while (j < word_length) {
            stockage[i].copy[j] = av[i][j];
            j++;
        }
        stockage[i].copy[j] = '\0';
        stockage[i].tab = (char **) malloc(word_length * sizeof(char *));
        temp = ft_split_whitespaces(stockage[i].copy);
        stockage[i].tab = temp;
        i++;
    }
    stockage[i].copy = (char *) malloc(1 * sizeof(char));
    stockage[i].copy = 0;
    return stockage;

}
