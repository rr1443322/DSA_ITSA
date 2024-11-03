#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int t = 0;
    int no = 0;
    scanf("%d", &a);
    for(int i = 1; i <=a; i++) {
        if (i%12 == 0) {
            no = 0;
        }
        if (no != 0 && i%2 == 0 && i%3 == 0) {
            t += i; 
        }
        no = 1;
    }
    printf("%d\n", t);



	return 0;
}
