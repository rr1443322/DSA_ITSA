#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("%d\n", max);
	return 0;
}
