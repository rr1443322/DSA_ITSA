#include <stdio.h>
#include <stdlib.h>

int main() {
    int total;
    scanf("%d", &total);
    while(total--) {
        double w;
        scanf("%lf", &w);
        double area;
        area = round(w*w*10);
        printf("%.1f\n", area/10);
    }

	return 0;
}
