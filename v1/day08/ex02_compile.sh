gcc -c -std=c11 -Wall -Wextra "$1".c -o "$1".o
gcc -o program "$1".o
