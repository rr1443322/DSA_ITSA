#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    char num[1000];
    int i = -1;
    while (a != 0) {
        char tmp;
        int b = a%16;
        if (b > 9) {
            tmp = 'A' + b-10;
            num[++i] = tmp;
        }       
        else {
            num[++i] = '0' + b; 
        }
        a = a/16;
    }
    for(int j = i; j >= 0; j--) {
        printf("%c", num[j]);
    }
    printf("\n");

	return 0;
}
