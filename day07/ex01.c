#include "myLib.h"

int *ft_range(int min, int max) {
    int i, * answer;

    if (max - min == 0) {
        answer = (int *) malloc (1 * sizeof(int));
    } else {
        answer = (int *) malloc ((max - min) * sizeof(int));
    }
    if (answer == NULL) {
        return NULL;
    }
    i = 0;
    while (min != max) {
        answer[i] = min;
        i++;
        min++;
    }
    return answer;
}
