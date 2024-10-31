#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d", a, b, a+b);
    printf("\n");
    printf("%d*%d=%d", a, b, a*b);
    printf("\n");
    printf("%d-%d=%d", a, b, a-b);
    printf("\n");
    int c = (a%b < 0) ? a/b - 1 : a/b;  
    int d = (a%b < 0) ? a%b + b : a%b;
    printf("%d/%d=%d...%d", a, b, c, d);
    printf("\n");
	return 0;
}
