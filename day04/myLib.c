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

void ft_putnbr(int nb) {
	int boolean, reste, quotient;
	boolean = 1;
	reste = 0;
	int i = 1;
	if (nb < 0) {
		nb = -nb;
		ft_putchar('-');
	}
	quotient = nb;
	while(quotient > 10) {
		quotient = quotient / 10;
		i = i * 10;
	}
	quotient = nb;
	while(boolean) {
		if (quotient < 10) {
			ft_putchar(quotient + 48);
			boolean = 0;
		} else {
			reste = quotient / i;
			ft_putchar(reste + 48);
			quotient = quotient - reste * i;
			i  = i /10;
		}
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

