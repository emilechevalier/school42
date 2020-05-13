#include <stdio.h>
#include "myLib.h"

int	ft_iterative_power(int nb, int power) {
	int i, result;
	
	if (power < 0) {
		return 0;
	} else if (power == 0) {
		return 1;
	} else {
		i = 0;
		result = 1;

		while (i < power) {
			result *= nb;
			i++;
		}
	}
	return result;
}

int main(void) {
	ft_putnbr(ft_iterative_power(-5, 3));
	ft_putchar('\n');
}
