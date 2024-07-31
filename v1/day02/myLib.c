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

