#include <stdio.h>
#include "myLib.h"

void	ft_ultimate_div_mod(int *a, int *b) {
	int temp;

	temp = * a;
	* a = * a / * b;
	* b = temp % * b;
}

int	main(void) {
	int a, b;
	int * ptra, * ptrb;
	a = 12;
	b = -3;
	ptra = &a;
	ptrb = &b;
	ft_ultimate_div_mod(ptra, ptrb);
	ft_putnbr(*ptra);
	ft_putchar('\n');
	ft_putnbr(* ptrb);
	ft_putchar('\n');
}
