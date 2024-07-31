void ft_print_words_tables( char **tab) {
	int i;
	
	i = 0;
	while(tab[i][0] != 0) {
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	free(tab);
}
