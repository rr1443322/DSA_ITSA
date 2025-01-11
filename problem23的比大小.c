#include <stdio.h>
#include <stdlib.h>

// 比較函式，供 qsort() 使用
int Cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[3];
    char ask[5];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%s", ask);
    qsort(arr, 3, sizeof(int), Cmp);

    if (ask[0] == 'A') {
        printf("%d<%d<%d\n", arr[0], arr[1], arr[2]);
    }
    else {
        printf("%d>%d>%d\n", arr[2], arr[1], arr[0]);
    }


    return 0;
}
