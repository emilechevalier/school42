#include <stdio.h>
#include "myLib.h"

int	ft_iterative_factorial(int nb) {
	
	int i;
	int result;

	result = 1;
	if (nb == 0 || nb == 1) {
		return result;
	}
	i = 2;
	while (i <= nb) {
		result *= i;
		i++;
	}
	return result;
}

int	main(void) {
	ft_putnbr(ft_iterative_factorial(4));
	ft_putchar('\n');
}
