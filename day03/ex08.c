#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int	ft_atoi(char *str) {
	int lengthStr;
	int i, j, pow;
	int count, countTemp;
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
			strNumber[count] = temp;
			count++;		
		}
		i++;
	}
	strNumber[count] = '\0';
	i = 0;
	j = 0;
	while(* (strNumber + i) != '\0') {
		ft_putchar(* (strNumber +i));
		ft_putstr(": ");
		countTemp = count - 1;
		pow = 1;
		while(countTemp > 0) {
			pow *= 10;
			countTemp--;
		}
		j += (* (strNumber + i) - 48) * pow;
		ft_putnbr(j);
		ft_putchar('\n');
		count--;
		i++;
	}
	return j;
}

int	main(void) {
	char str1[] = "/* 3emile69";
	ft_putnbr(ft_atoi(str1));
	ft_putchar('\n');
	ft_putnbr(atoi(str1));
	ft_putchar('\n');
}
