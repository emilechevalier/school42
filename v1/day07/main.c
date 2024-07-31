#include "myLib.h"

int	main(void) {
	char str[] = "Hola que tal ?";
	char ** answer;
	answer = ft_split_whitespaces(str);
	ft_print_words_tables(answer);
	return 0;
}
