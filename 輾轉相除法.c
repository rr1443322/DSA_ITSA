#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    while(a != 0 && b != 0) {
        if (a / b > 0) {
            a = a % b;
        } 
        else if (a / b <= 0) {
            b = b % a;
        }
    }
    int ans = (a == 0) ? b : a;
    printf("%d\n", ans);
    
	return 0;
}
