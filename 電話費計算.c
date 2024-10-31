#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int m;
    scanf("%d", &m);
    double t;
    if (m < 800) {
        t = m * 0.9;
    }
    else if (m >= 800 && m < 1500) {
        t = m * 0.81;
    }
    else {
        t = m * 0.9 * 0.79;
    }
    t = round(t*10);
    printf("%.1f\n", t/10);


	return 0;
}
