#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int a, b;
        scanf("%d %d" ,&a ,&b);
        printf("%d\n", (a+b)*(a+b));
    }

	return 0;
}
