#include <stdio.h>
#include "myLib.h"

int toBePrinted(char unit, char digit) {
	if (unit != digit && unit > digit) {
		return 1;
	} else {
		return 0;
	}
}


void ft_print_comb1() {
	int i;
	int first;
	char unit = '0';
	first = 1;
	i = 0;
	while (i < 10) {
		if (first == 1) {
			ft_putchar(unit);
			first = 0;
		} else {
			ft_putchar(',');
			ft_putchar(' ');
			ft_putchar(unit);
		}
		unit++;
		i++;
		}
}

void ft_print_comb2() {
	int i;
	int first;
	i = 0;
	char unit = '0';
	char digit = '0';
	first = 1;
	while (i < 100) {
		if (toBePrinted(unit, digit)) {
			if (first == 1) {
				ft_putchar(digit);
				ft_putchar(unit);
				first = 0;
			} else {
				ft_putchar(',');
				ft_putchar(' ');
				ft_putchar(digit);
				ft_putchar(unit);
			}
		}
		if ((unit - 47) % 10 == 0) {
			unit = '0';
			digit++;
			i++;
		} else {
			unit++;
			i++;
		}

	}
}

void ft_print_combn(int n) {
	int i;
        char unit = '0';
	char digit = '0';
	char hundred = '0';
	char thousand = '0';
	char tthousand = '0';
	char ohthousand = '0';
	char million = '0';
	char tmillion = '0';
	char hmillion = '0';
	int first = 1;

	if (n == 1) {
		ft_print_comb1();
		ft_putchar('\n');
	}
	if (n == 2) {
		ft_print_comb2();
		ft_putchar('\n');
	}
	if (n == 3) {
		unit = '0';
		digit = '0';
		i = 0;
		first = 1;
		while ( i < 1000) {
			if (toBePrinted(unit, digit) && toBePrinted(digit, hundred) && toBePrinted(unit, hundred)) {
				if (first == 1) {
					ft_putchar(hundred);
					ft_putchar(digit);
					ft_putchar(unit);
					first = 0;
				} else {
					ft_putchar(',');
					ft_putchar(' ');
					ft_putchar(hundred);
					ft_putchar(digit);
					ft_putchar(unit);
				}
			}
			if ((i + 1) % 10 == 0) {
				if((digit + 1) != '9') {
					unit = '0';
					digit++;
					i++;
				}
				else {
					unit = '0';
					digit = '0';
					hundred++;
					i++;
				}
			} else {
				unit++;
				i++;
			}
		}
		ft_putchar('\n');
	}
}

int main(void) {
	ft_print_combn(2);
}
