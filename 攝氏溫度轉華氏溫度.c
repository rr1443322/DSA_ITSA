#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    float a;
    scanf("%f", &a);
    float b = a*(9.0/5.0) + 32;
    b = round(b*10);
    printf("%.1f", b/10);
    printf("\n");

	return 0;
}
