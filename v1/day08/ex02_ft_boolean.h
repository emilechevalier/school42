#include <stdlib.h>
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 ? TRUE : FALSE) 
typedef enum {false, true} t_bool; 
