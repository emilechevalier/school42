#include <stdio.h>
#include "myLib.h"

int	ft_recursive_factorial(int nb) {
	
	if (nb == 0 || nb == 1) {
		return 1;
	} else {
		return nb * ft_recursive_factorial(nb - 1);
	}
}

int	main(void) {
	ft_putnbr(ft_recursive_factorial(12));
	ft_putchar('\n');
}
