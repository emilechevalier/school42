
char ** ft_split_whitespaces(char * str) {
    char ** answer, temp;
    int i, j, k, nb_of_words, new_word, first_loop;

    first_loop = 1;
    nb_of_words = 0;
    i = 0;
    new_word = 0;
    // 1 - Looking for nb of words in str
    while(* (str + i) != '\0') {
        temp = * (str +i);
        if (temp == '\n' || temp == '\t' || temp == ' ') {
            // Tant que ce n'est pas un caractère d'un mot, c'est un nouveau mot.
            new_word = 1;
        } else if (new_word == 1 || first_loop == 1) {
            // si c'est un nouveau mot, on ajoute 1 au compteur
            new_word = 0;
            first_loop = 0;
            nb_of_words++;
        } else {
            // si ce n'est pas un nouveau mot, on continue.
        }
        i++;
    }
    answer = (char **) malloc(nb_of_words * sizeof(char *));
    i = 0;
    new_word = 0;
    nb_of_words = 0;
    first_loop = 1;
    while (* (str + i) != '\0') {
        temp = * (str + i);
        if (temp == '\n' || temp == '\t' || temp == ' ') {
            new_word = 1;
        } else if (new_word == 1 || first_loop == 1) {
            j = i;
            k = 0;
            // new word : necessity to know how long it is.
            while (* (str + j) != '\n' && * (str + j)  != '\t' && * (str + j)  != ' ') {
                j++;
                k++;
            }
            answer[nb_of_words] = (char *) malloc((k + 1) * sizeof(char));
            j = i;
            k = 0;
            while (* (str + j) != '\n' && * (str + j)  != '\t' && * (str + j)  != ' ') {
                answer[nb_of_words][k] = * (str + j);
                j++;
                k++;
            }
            answer[nb_of_words][k] = '\0';
            new_word = 0;
            first_loop = 0;
            nb_of_words++;
        } else {
            // si ce n'est pas un nouveau mot, on continue.
        }
        i++;
    }
    answer[nb_of_words] = (char *) malloc(sizeof(char));
    answer[nb_of_words][0] = 0;
    return answer;
}
