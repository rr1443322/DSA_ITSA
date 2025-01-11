#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int g;
        scanf("%d", &g);
        if (g >= 90) printf("優等\n");
        else if (g >= 80) printf("甲等\n");
        else if (g >= 70) printf("乙等\n");
        else if (g >= 60) printf("丙等\n");
        else printf("不及格\n"); 
    }





	return 0;
}
