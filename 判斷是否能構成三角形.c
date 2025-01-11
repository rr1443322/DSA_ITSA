#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b ,&c);
    int yn = 1;
    if (a >= b+c || b >= a+c || c >= a+b) yn = 0;
    yn == 1 ? printf("fit\n") : printf("unfit\n");
    return 0;
}
