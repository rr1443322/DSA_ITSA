#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    while(num--) {
        int a;
        scanf("%d", &a);
        if (a == 0) printf("1\n");
        else {
            long long ans = 1;
            for(int i = 1; i <= a; i++) {
                ans *= i;
            }
            printf("%lld\n", ans);
        }
    }


	return 0;
}
