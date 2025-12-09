//
// Created by Rain on 11/28/2025.
//


#include <stdio.h>


int main() {
	int n = 0;
	while (n < 1000) {
#define TEN(x) (x << 1) + (x << 3)
		printf("%i\n", TEN(n));
		n++;
	}
}

