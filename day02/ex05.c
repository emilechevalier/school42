#include <stdio.h>
#include <unistd.h>
#include "myLib.h"

void ft_print_comb2(void) {
    int i, j;
    char units = '0';
    char dizaine  ='0';
    char sUnits;
    char sDizaine;
    int first = 1;
    
    i = 0;
    while (i < 100) {
    	j = 0;
	sUnits = '0';
	sDizaine = '0';
	while (j < 100) {
		if (i != j) {
			if (first == 1) {
				ft_putchar(dizaine);
				ft_putchar(units);
				ft_putchar(' ');
				ft_putchar(sDizaine);
				ft_putchar(sUnits);
				first = 0;
			} else {
				ft_putchar(',');
				ft_putchar(' ');
				ft_putchar(dizaine);
				ft_putchar(units);
				ft_putchar(' ');
				ft_putchar(sDizaine);
				ft_putchar(sUnits);
			}
		}
		if (j == 0) {
			sUnits++;
			j++;
		} else if ((j+1) % 10 == 0) {
			sDizaine++;
			sUnits = '0';
			j++;
		}
		else {
			sUnits++;
			j++;
		}
	}
	if ((i+1) % 10 == 0 && i != 0) {
		dizaine++;
		units = '0';
		i++;
	} else {
		units++;
		i++;

	}
    }
}

int main(void) {
	ft_print_comb2();
	printf("\n");
}
