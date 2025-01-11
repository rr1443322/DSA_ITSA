#include <stdio.h>
#include <stdlib.h>

int main() {
    int s;
    int d;
    scanf("%d %d", &s, &d);
    int m = 0;
    for(int i = 1; i <= d; i++) {
        m += s;
        s *= 2;
    }
    printf("第%d天共存%d元\n",d, m);



	return 0;
}
