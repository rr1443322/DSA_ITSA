#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
    int a;
    scanf("%d", &a);
    float b = a * 1.6;
    b = round(b*10);
    printf("km=%.1f\n", b/10);

	return 0;
}
