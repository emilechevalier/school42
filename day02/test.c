#include <stdio.h>
#include "myLib.h"

int main(void) {
	char unit = '0';
	char digit = '0';
	for (int i = 0; i < 20; i++) {
		printf("unit + 1 = %d\n", unit - 48 + 1);
		unit++;
	}
}
