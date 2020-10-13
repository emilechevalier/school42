#include <stdio.h>
#include "myLib.h"

int ft_is_prime(int nb) {
	//Param nb : un entier
	//Return int : 1 si l'entier donné en paramètre est premier, 0 sinon.
	/*
		Un nombre est premier s'il est divisible par 1 et par lui-même
		On créé un tableau de la taille de l'entier passé en paramètre
		on y ajoute tous les nombres premiers et on cherche à diviser l'entier par chaque nombre présent dans le tableau.

	*/

	int i, is_prime;
	i = nb / 2;
	is_prime = 1;

	while (i != 1) {
		if (nb % i == 0) {
			is_prime = 0;
			break;
		} else {
			i--;
		}
	}
	return is_prime;


}

int main(void) {
	for(int i = 2; i < 1000; i++) {
		if (ft_is_prime(i)) {
			ft_putnbr(i);
			ft_putstr(" is prime.\n");
		}
	}
	return 0;
}
