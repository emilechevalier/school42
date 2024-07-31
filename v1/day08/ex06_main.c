#include <stdlib.h>
#include "myLib.h"

int	main(int argc, char ** argv) {

    struct s_stock_par * answer;

    answer = ft_param_to_tab(argc, argv);
    ft_show_tab(answer);
    return 0;

}
