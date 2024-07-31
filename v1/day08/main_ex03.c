#include <stdlib.h>
#include "ex03.h"

void	ft_putchar(char c) {
	
	write(1, &c, 1);
}

int	main() {
	int i;
	
	i = -5;
	i = ABS(i);
	ft_putchar(i + 48);
}
