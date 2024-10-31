#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        long long a;
        scanf("%lld", &a);
        if (a > 31) {
            printf("Value of more than 31\n");
        }
        else {
            printf("%lld\n", 2<<a-1);
        }
    }
	return 0;
}
