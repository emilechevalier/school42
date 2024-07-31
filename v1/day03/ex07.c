#include <stdio.h>
#include "myLib.h"

char	*ft_strrev(char *str) {
	int l, i;
	char temp;
	l = 0;
	//Compte la longueur du mot
	while (* (str + l) != '\0') {
		l++;
	}
	
	char strReverse[l + 1]; //need place for str length  + '\0'
	i = 0;
	
	//Copie le mot inversé dans une variable locale
	while ( l != 0) {
		l--;
		temp = * (str + l);
		* (strReverse + i) = temp;
		i++;
	}
	* (strReverse + i) = '\0';
	i = 0;
	
	//Copie le mot inversé dans le pointeur passé en paramètre
	while (strReverse[i] != '\0') {
		* (str + i) = strReverse[i];
		i++;
	}
	return str;
}

int	main(void) {
	char str[] = "emile";
	ft_putstr(ft_strrev(str));
	ft_putchar('\n');
	return 0;
}
