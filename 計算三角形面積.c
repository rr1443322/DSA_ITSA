#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int bottom, height;
    scanf("%d %d", &bottom, &height);
    double area =  (bottom * height)/2.0;

    area = round(area*10);
    
    printf("Triangle area:%.1f\n", area*0.1);

	return 0;
}
