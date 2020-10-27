#include "myLib.h"

int ft_ultimate_range(int **range, int min, int max) {
    int i;
    if (min >= max) {
        range = NULL;
        return 0;
    }
    i = 0;
    while (min != max) {
        * (range + i);
        range[i][0] = min;
        min++;
        i++;
    }
    return i;
}

