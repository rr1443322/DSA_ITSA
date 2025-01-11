#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("%d\n", 0);
    }
    else if (n > 0) {
        printf("正數\n");
    }
    else {
        printf("負數\n");
    }




	return 0;
}
