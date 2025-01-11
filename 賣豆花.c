#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    scanf("%d", &m);
    printf("百元 %d\n", m/100);
    m %= 100;
    printf("十元 %d\n", m/10);
    m %= 10;
    printf("壹元 %d\n", m); 

	return 0;
}
