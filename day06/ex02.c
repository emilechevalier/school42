#include "myLib.h"

int	main(int argc, char **argv) {
	int i, j;
	i = 1;
	j = 0;
	while (i < argc) {
		j = 0;
		while (argv[i][j] != '\0') {
			ft_putchar(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
		ft_putchar(' ');
	}
	return 1;
}
