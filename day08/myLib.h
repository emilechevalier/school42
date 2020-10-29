//gcc -c myLib.c -o myLib.o
//ar -rcs libmyLib.a myLib.o myLib.h
void	ft_putchar(char);
void	ft_print_alphabet(void);
void 	ft_print_numbers(void);
void 	ft_is_negative(int);
void 	ft_putnbr(int);
void 	ft_putstr(char *str);
int	ft_strlen(char * str);
int	ft_is_prime(int);
void 	ft_swap(int *, int *);
int	ft_strcmp(char *, char *);
void	ft_print_words_tables(char **);
char ** ft_split_whitespaces(char *);
struct	s_stock_par *	ft_param_to_tab(int, char **);
void	ft_show_tab(struct s_stock_par *);
