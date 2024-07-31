#include <stdlib.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_alphabet() {
    char letter = 'a';
    while (letter != 'z') {
        ft_putchar(letter);
        letter += 1;
    }
    ft_putchar(letter);
}

void ft_print_reverse_alphabet(void) {
    char letter = 'z';
    while(letter >= 'a') {
        ft_putchar(letter);
        letter -= 1;
    }
}

void ft_print_numbers() {
    char number = '0';
    int i = 0;
    while (number <= '9') {
        ft_putchar(number);
        number++;
    }
}

void ft_is_negative(int n) {
    if (n >= 0) {
        ft_putchar('P');
    } else {
        ft_putchar('N');
    }
}

void    ft_putnbr(int nb) {
    if (nb < 0) {
        ft_putchar('-');
        nb = nb * -1;
    }
    if (nb < 10) {
        ft_putchar(nb + 48);
    } else {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + 48);
    }
}

void	ft_putstr(char *str) {
	int i;

	i = 0;
	while (* (str + i) != '\0') {
		ft_putchar(* (str + i));
		i++;
	}

}


int	ft_strlen(char * str) {
	int i;

	i = 0;
	while (* (str + i) != '\0') {
		i++;
	}
	return i;
}


int	ft_is_prime(int nb) {
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

void	ft_swap(int *a, int *b) {
	int temp;
	temp = *b;
	* b = * a;
	* a = temp;
}

int ft_strcmp(char * s1, char * s2) {
    int i;

    i = 0;
    while (* (s1 + i) != '\0' && * (s2 + i) != '\0') {
        if (* (s1 + i) == * (s2 +i)) {
            i++;
        } else {
            return * (s1 + i) - * (s2 + i);
        }
    }
    return * (s1 + i) - * (s2 + i);
}

char ** ft_split_whitespaces(char * str) {
    char ** answer, temp;
    int i, j, k, nb_of_words, new_word, first_loop;

    first_loop = 1;
    nb_of_words = 0;
    i = 0;
    new_word = 0;
    // 1 - Looking for nb of words in str
    while(* (str + i) != '\0') {
        temp = * (str +i);
        if (temp == '\n' || temp == '\t' || temp == ' ') {
            // Tant que ce n'est pas un caractère d'un mot, c'est un nouveau mot.
            new_word = 1;
        } else if (new_word == 1 || first_loop == 1) {
            // si c'est un nouveau mot, on ajoute 1 au compteur
            new_word = 0;
            first_loop = 0;
            nb_of_words++;
        } else {
            // si ce n'est pas un nouveau mot, on continue.
        }
        i++;
    }
    answer = (char **) malloc(nb_of_words * sizeof(char *));
    i = 0;
    new_word = 0;
    nb_of_words = 0;
    first_loop = 1;
    while (* (str + i) != '\0') {
        temp = * (str + i);
        if (temp == '\n' || temp == '\t' || temp == ' ') {
            new_word = 1;
        } else if (new_word == 1 || first_loop == 1) {
            j = i;
            k = 0;
            // new word : necessity to know how long it is.
            while (* (str + j) != '\n' && * (str + j)  != '\t' && * (str + j)  != ' ') {
                j++;
                k++;
            }
            answer[nb_of_words] = (char *) malloc((k + 1) * sizeof(char));
            j = i;
            k = 0;
            while (* (str + j) != '\n' && * (str + j)  != '\t' && * (str + j)  != ' ') {
                answer[nb_of_words][k] = * (str + j);
                j++;
                k++;
            }
            answer[nb_of_words][k] = '\0';
            new_word = 0;
            first_loop = 0;
            nb_of_words++;
        } else {
            // si ce n'est pas un nouveau mot, on continue.
        }
        i++;
    }
    answer[nb_of_words] = (char *) malloc(sizeof(char));
    answer[nb_of_words][0] = 0;
    return answer;
}

void	ft_print_words_tables(char **tab) {
	int i;

	i = 0;
	while(tab[i][0] != 0) {
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	free(tab);
}
