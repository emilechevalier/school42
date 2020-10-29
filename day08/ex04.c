#include <stdlib.h>
#include "ex04_ft_point.h"

void	ft_putchar(char c) {
	
	write(1, &c, 1);
}

void	set_point(t_point *point) {
	point->x = 2;
	point->y = 21;
}

int	main(void) {
	
	t_point point;
	set_point(&point);
	ft_putchar((point.x) + 48);
	return 0;
}
