#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int num[100];
    int i = 0;
    while(n--) {
        scanf("%d", &num[i++]);
    }
    int max = -1111;
    for(int j = 0; j < i; j++) {
        max = (num[j] > max) ? num[j] : max; 
    }
    printf("%d\n", max);


	return 0;
}
