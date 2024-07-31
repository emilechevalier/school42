#include "myLib.h"

char * ft_strstr(char *str, char * to_find) {
    int i, j, still_good, index_substring, first_occ;

    i = 0;
    j = 0;
    still_good = 0;
    index_substring = 0;
    first_occ = 1;
    while (* (str + i) != '\0') {
        if (* (to_find + j) == '\0') {
            if (still_good == 1) {
                return str + index_substring;
            } else {
                return NULL;
            }
        } else if (* (str + i) == * (to_find + j) && first_occ == 1) {
            still_good = 1;
            index_substring = i;
            first_occ = 0;
            i++;
            j++;
        } else if (* (str + i) == * (to_find + j) && first_occ == 0) {
            still_good = 1;
            i++;
            j++;
        } else {
            still_good = 0;
            index_substring = 0;
            first_occ = 1;
            i++;
            j = 0;
        }
    }
    if (still_good == 1) {
        return str + index_substring;
    } else {
        return NULL;
    }

}
