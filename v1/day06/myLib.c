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
