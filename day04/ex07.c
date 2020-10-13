#include <stdlib.h>
#include "myLib.h"


int	ft_find_next_prime(int nb) {
	int * primes;
	primes = (int *) malloc(nb * sizeof(int));
	primes[0] = 2;
	primes[1] = 3;
	primes[2] = 5;
	primes[3] = 7;
	primes[4] = 11;
	primes[5] = 13;
	primes[6] = 17;
	int i, next_prime, last_prime, is_prime;
	next_prime = 0;
	last_prime = 0;
	i = 0;

	while (next_prime == 0) {
		//On vérifie si le nombre passé en paramètre est premier
		while (* (primes + i) != 0) {
			if (nb == * (primes + i)) {
				return nb;
			}
			if (nb < * (primes + i)) {
				return * (primes + i);
			}
			last_prime = * (primes + i);
			i++;
		}
		//Si ne l'est pas, on démarre de last prime et on vérifie si le nombre est premier. Si il est supérieur ou égal à nb on renvoie cette valeur.i
		i = 1;
		is_prime = 0;
		while (is_prime != 1) {
			if (ft_is_prime(last_prime + i) && last_prime + i >= nb) {
				return last_prime + i;
			} else {
				i++;
			}

		}
	}
	free(primes);
	return 0;
}

int	main(void) {
	for (int i = 990; i <= 1100; i++) {
		ft_putstr("Le prochain nombre premier après : ");
		ft_putnbr(i);
		ft_putstr(" est : ");
		ft_putnbr(ft_find_next_prime(i));
		ft_putchar('\n');
	}
	return 0;
}
