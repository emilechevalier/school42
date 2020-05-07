#include <stdio.h>
#include "myLib.h"

void	ft_putstr(char *str) {
	int i;

	i = 0;
	while (* (str + i) != '\0') {
		ft_putchar(* (str + i));
		i++;
	}

}

int	main(void) {
	
	char str[] = "emile";
	
	ft_putstr(str);
	ft_putchar('\n');
}
