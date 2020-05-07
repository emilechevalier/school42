#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int	ft_atoi(char *str) {
	int lengthStr;
	int i;
	int count;
	char temp;

	lengthStr = ft_strlen(str);
	char strNumber[lengthStr]; 	

	if (lengthStr == 0) {
		return 0;
	}

	i = 0;
	count = 0;
	while(* (str + i) != '\0') {
		temp = * (str + i);
		if (temp == '0' || temp == '1' || temp == '2' || temp == '3' || temp == '4' ||
			temp == '5' || temp == '6' || temp == '7' || temp == '8' ||
			temp == '9' ) {
			count++;		
		}
		i++;
	}
	return count;
}

int	main(void) {
	char str1[] = " 3emile69";
	ft_putnbr(ft_atoi(str1));
	ft_putchar('\n');
	ft_putnbr(atoi(str1));
	ft_putchar('\n');
	for (int i = 0; i < 256; i++) {
		ft_putchar('0' + i);
		ft_putchar(',');
	}
	ft_putchar('\n');
}
