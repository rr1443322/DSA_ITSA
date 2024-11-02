#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int time, payment;
    double t;
    scanf("%d %d", &time, &payment);
    if (time <= 60) {
        t = time * payment;
    }
    else if (time > 60 && time <= 120) {
        t = 60 * payment;
        t = t + (time - 60) * payment * 1.33;
    }
    else if (time > 120) {
        t = 60 * payment;
        t = t + (60) * payment * 1.33;
        t = t + (time-120) * payment * 1.66;
    }
    t = round(t*10);
    printf("%.1f\n", t/10);



	return 0;
}
