#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int dis;
    scanf("%d", &dis);
    float v = 100 - 30*2.54;
    float dis1 = dis*100 +0.0;
    float result = dis1 / v - 0.5;
    result = round(result) + 1.0;
    printf("%d\n", (int)result);

	return 0;
}
