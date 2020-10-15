#include "myLib.h"


int ft_strncmp(char * s1, char * s2, unsigned int n) {
    int i, result;

    i = 0;
    result = 0;
    if (n == 0) {
        return 0;
    }
    while (* (s1 + i) != '\0' && * (s2 + i) != '\0' && i < n - 1) {
        if (* (s1 + i) == * (s2 +i)) {
            i++;
        } else {
            return * (s1 + i) - * (s2 + i);
        }
    }
    return * (s1 + i) - * (s2 + i);
}
