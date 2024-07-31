#include <stdio.h>
#include "myLib.h"

int	ft_strlen(char * str) {
	int i;

	i = 0;
	while (* (str + i) != '\0') {
		i++;
	}
	return i;
}

int	main(void) {
	
	char str[] = "emile";

	ft_putnbr(ft_strlen(str));
	ft_putchar('\n');	
}
