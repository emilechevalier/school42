#include<stdio.h>
#include"myLib.h"

void	ft_swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void) {
	int a;
	int b;
	int * ptra;
	int * ptrb;
	a = 42;
	b = 69;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putchar('\n');
}
