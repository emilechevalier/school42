#include <stdio.h>
#include "myLib.h"

int	ft_sqrt(int nb) {
	int i;
	if (nb <= 0) {
		return 0;
	} else if (nb <= 1000) {
		i = 1;
		while (i <= nb / 2) {
			if (i * i != nb) {
				i++;
			} else {
				return i;
			}
		}
	} else if (nb <= 1000000) {
		i = 10;
		while (i <= nb / 2) {
			if (i * i != nb) {
				i++;
			} else {
				return i;
			}
		}
	} else {
		i = 1000;
		while (i <= nb / 2) {
			if (i * i != nb) {
				i++;
			} else {
				return i;
			}
		}
	}
	return 0;
}

int	main(void) {
	ft_putnbr(ft_sqrt(2396304));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(65537));
	ft_putchar('\n');
}
