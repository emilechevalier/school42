#include <stdio.h>
#include "myLib.h"

void ft_putnbr(int nb) {
	int boolean, reste, quotient;
	boolean = 1;
	reste = 0;
	int i = 1;
	if (nb < 0) {
		nb = -nb;
		ft_putchar('-');
	}
	quotient = nb;
	while(quotient > 10) {
		quotient = quotient / 10;
		i = i * 10;
	}
	quotient = nb;
	printf("Length of nbr %d\n", i); 
	while(boolean) {
		if (quotient < 10) {
			ft_putchar(quotient + 48);
			boolean = 0;
		} else {
			reste = quotient / i;
			ft_putchar(reste + 48);
			quotient = quotient - reste * i;
			i  = i /10;
		}
	}
}

int main(void) {
	ft_putnbr(150);
	printf("\n");
}
