#include <stdio.h>
#include "myLib.h"

int	ft_fibonnaci(int index) {
	if (index < 0) {
		return -1;
	} else if (index == 0) {
		return 0;
	} else if (index == 1) {
		return 1;
	} else if (index == 2) {
		return 1;
	} else {
		return ft_fibonnaci(index - 1) + ft_fibonnaci(index - 2);
	}
}

int 	main(void) {
	ft_putnbr(ft_fibonnaci(6));
	ft_putchar('\n');
}
