#include <stdio.h>
#include "myLib.h"

void	ft_sort_integer_table(int *tab, int size) {
	int i;
	int was_swap;
	int temp;

	was_swap = 1;
	while(was_swap == 1) {
		i = 0;
		was_swap = 0;
		while(i < (size - 1)) {
			temp = * (tab + i);
			if (temp > (* (tab + i + 1))) {
				* (tab + i) = * (tab + i + 1);
				* (tab + i + 1) = temp;
				was_swap = 1;
			}
			i++;
		}
	}

}

int main(void) {
	int tab[] = {5, 2, 6, 7, 8, 5, 3};
	ft_sort_integer_table(tab, 7);
	for(int i = 0; i < 7; i++) {
		ft_putnbr(* (tab + i));
	}
	ft_putchar('\n');
}
