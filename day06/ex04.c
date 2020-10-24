#include "myLib.h"
#include <stdlib.h>

int	main(int argv, char ** argc) {
	int i, j, is_sorted;
	int * index;

	char * temp;

	index = malloc(argv * sizeof(int));
	i = 1;
	j = 0;
	is_sorted = 0;
	while(is_sorted == 0) {
		i = 1;
		j = 0;
		is_sorted = 1;
		while(i < argv - 1) {
			if(argc[i][0] <= argc[i + 1][0]) {
			} else {
				temp = argc[i];
				argc[i] = argc[i+1];
				argc[i + 1] = temp;
				is_sorted = 0;
			}
			j++;
			i++;
		}
	}
	//now we can print values
	i = 1;
	while (i < argv) {
		j = 0;
		while(argc[i][j] != '\0') {
			ft_putchar(argc[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	free(index);
	return 0;
}
