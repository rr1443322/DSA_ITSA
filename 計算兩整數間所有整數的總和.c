#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int a,b;
        scanf("%d %d", &a, &b);
        int t = 0;
        if (a < b) {
            for(int i = a; i <= b; i++) {
                t += i;
            } 
        }
        else {
            for(int i = b; i <= a; i++) {
                t += i;
            } 
        }
        printf("%d\n", t);
        
    }




	return 0;
}
