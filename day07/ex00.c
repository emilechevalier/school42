#include "myLib.h"

char *ft_strdup(char *str) {
    char *dup;
    int length, i;

    length = ft_str_length(str);
    dup = (char *) malloc(length * sizeof(char));
    if (dup == NULL) {
        return NULL;
    }
    i = 0;
    while (*(str + i) != '\0') {
        dup[i] = *(str + i);
        i++;
    }
    dup[i] = *(str + i);
    return dup;
}
