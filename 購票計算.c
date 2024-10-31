#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    scanf("%d", &m);
    printf("NT10=%d\n", m/10);
    m  = m % 10;
    printf("NT5=%d\n", m/5);
    m = m % 5;
    printf("NT1=%d\n", m);


	return 0;
}
