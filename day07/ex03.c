#include "myLib.h"
#include <stdlib.h>

char * ft_concat_parameters(int argc, char **argv) {
    char * answer;
    int i, j, k, total_length;
    i = 1;
    total_length = 0;
    while (i < argc) {
        total_length = total_length + ft_strlen(argv[i]);
        total_length++;
        i++;
    }
    answer = (char *) malloc(total_length * sizeof(char));
    if (answer == NULL) {
        return NULL;
    }
    i = 1;
    j = 0;
    k = 0;
    while (i < argc) {
        j = 0;
        while (argv[i][j] != '\0') {
            answer[k] = argv[i][j];
            j++;
            k++;
        }
	answer[k] = '\n';
	k++;
        i++;
    }
    return answer;
}

int	main(int argc, char **argv) {
	char * answer;
	answer = ft_concat_parameters(argc, argv);
	ft_putstr(answer);
	free(answer);
	return 0;
}
