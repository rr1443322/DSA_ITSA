#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    float w1 = w + 0.0;
    float h1 = (h + 0.0) / 100;
    float b = w1 / ((h1) * (h1));
    b = round(b*100);

    printf("%.2f\n", b/100);


	return 0;
}
