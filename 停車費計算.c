#include <stdio.h>
#include <stdlib.h>

int main() {
    int h1, m1, h2, m2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    int f = h2*60 + m2;
    int s = h1*60 + m1;
    if (f - s <= 120) {
        int tmp = (f-s)/30;
        printf("%d\n", tmp*30);
    }
    else if (f - s > 120 && f - s <= 240) {
        int tmp = (f-s-120)/30;
        printf("%d\n", tmp*40 + 120);
    }
    else {
        int tmp = (f-s-240)/30;
        printf("%d\n", tmp*60 + 120 + 160);
    }
	return 0;
}
