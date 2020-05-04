#include <stdio.h>
#include <unistd.h>
#include "myLib.h"

void ft_print_comb(void) {
    int i = 1;
    char fDigit = '0';
    char sDigit ='0';
    char tDigit = '0';
    int first = 1;
    while (i < 1000) {
        if (fDigit != sDigit && sDigit != tDigit && fDigit != tDigit) {
        	if(tDigit < sDigit && sDigit < fDigit) {
			if (first == 1) {
				ft_putchar(tDigit);
                		ft_putchar(sDigit);
               			ft_putchar(fDigit);
				first = 0;
                	} 
			else {
				ft_putchar(',');
				ft_putchar(' ');
				ft_putchar(tDigit);
				ft_putchar(sDigit);
				ft_putchar(fDigit);
			}
            	}
        }
	if (i == 0) {
		fDigit++;
		i++;
	}
	else if ((i % 100) == 0 && i != 0) {
		tDigit += 1;
		sDigit = '0';
		fDigit = '0';
		i++;
	}
	else if ((i % 10) == 0 && i != 0) {
           sDigit += 1;
           fDigit = '0';
	   i++;
        }
	else {
		fDigit++;
		i++;
	}
    }
}

int main(void) {
    ft_print_comb();
    printf("\n");
}
