#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int t,b,h;
    scanf("%d %d %d", &t, &b, &h);
    double area;
    area = ((t+b)*h)/2.0;
    area = round(area*10);
    printf("Trapezoid area:%.1f\n", area/10);

	return 0;
}
