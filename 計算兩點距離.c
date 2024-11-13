#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int x1, y1, x2, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    double d = (x1-x2)*(x1-x2);
    d = d + (y1-y2)*(y1-y2);
    d = sqrt(d);
    d = round(d*100);
    printf("%.2f\n", d/100);
	return 0;
}
