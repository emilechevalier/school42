#include <stdio.h>
#include "myLib.h"

int	ft_recursive_power(int nb, int power) {
	
	if(power == 0) {
		return 1;
	} else if (power == 1) {
		return nb;
	} else {
		return nb * ft_recursive_power(nb, power - 1);
	}
}

int	main(void) {
	ft_putnbr(ft_recursive_power(-5, 3));
	ft_putchar('\n');
}
