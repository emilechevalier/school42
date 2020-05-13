#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int	ft_atoi(char *str) {
	int lengthStr;
	int i, value;
	char temp;
	// Compter la longueur de la chaine de caractère et créer une chaine de la même longueur
	lengthStr = ft_strlen(str);

	if (lengthStr == 0) {
		return 0;
	}
	// Place chaque chiffre valable dans la chaine
	i = 0;
	value = 0;
	while(* (str + i) != '\0') {
		temp = * (str + i);
		if (temp == ' ' || temp == '\n'|| temp == '\t') {
			i++;
			continue;
		}
		else if (temp == '0' || temp == '1' || temp == '2' || temp == '3' || temp == '4' ||
			temp == '5' || temp == '6' || temp == '7' || temp == '8' ||
			temp == '9' ) {
			//Ajouter le nombre à celui existant
			value = value * 10 + (temp - 48);
			i++;
		} else {
			break;
		}
	}
	return value;
}

int	main(void) {
	char str1[] = " \t389emile69";
	ft_putnbr(ft_atoi(str1));
	ft_putchar('\n');
	ft_putnbr(atoi(str1));
	ft_putchar('\n');
}
