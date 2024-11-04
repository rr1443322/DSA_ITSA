#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int number[8] = {0};
    
    if (a >= 0) {
        int tmp = a;      // 5 的二進制表示是 0000 0101
        for(int i = 0; i < 8; i++) {
            number[i] = tmp%2;
            tmp= tmp/2;
        }
        for(int i = 7; i >= 0; i--) {
            printf("%d", number[i]);
        }

    }
 
    if (a < 0) {
        int tmp = -a;
        int record;
        for(int i = 0; i < 8; i++) {
            number[i] = tmp%2;
            tmp = tmp/2;
        }
        for(int i = 7; i >= 0; i--) {
            if (number[i] == 1) {
                record = i;
                break;
            }
        }
        record = 8-record;
        for(int i = 7; i >= 0; i--) {
            if (record-- > 0) {
                printf("%d", 1);
            }
            else printf("%d", number[i]);
        }
    }
    printf("\n");

	return 0;
}
