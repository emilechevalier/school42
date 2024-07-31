#include <stdio.h>
#include "myLib.h"

void	ft_div_mod(int a, int b, int *div, int *mod) {
	* div = a / b;
	* mod = a % b;
}

int	main(void) {
	int a, b, div, mod;
	int * ptrdiv, * ptrmod;
	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	ptrdiv = &div;
	ptrmod = &mod;
	
	ft_div_mod(a, b, ptrdiv, ptrmod);
	ft_putnbr(* ptrdiv);
	ft_putnbr(* ptrmod);
	ft_putchar('\n');
}

