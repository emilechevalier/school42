#include "myLib.h"

int	main(int argc, char ** argv) {
	int i, j;

	i = argc - 1;
	while(i != 0) {
		j = 0;
		while(argv[i][j] != '\0') {
			ft_putchar(argv[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
}
