#include<stdio.h>
#include "myLib.h"

void ft_ft(int *nbr) {
	* nbr = 42;
	ft_putnbr(* nbr);
}

int main(void) {
	int * nb;
	int nbr;
	nbr = 5;
	nb = &nbr;
	ft_ft(nb);
	ft_putchar('\n');
}
