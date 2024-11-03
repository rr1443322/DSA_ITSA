
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 判斷是否為質數的函數
bool is_prime(int num) {
    if (num <= 1) return false;            // 小於等於 1 的數不是質數
    for (int i = 2; i * i <= num; i++) {   // 檢查從 2 到 √num 的所有數
        if (num % i == 0) return false;    // 若能被整除，則不是質數
    }
    return true;
}

int main() {
    int a;
    scanf("%d", &a);
    int ans = a - 1;

    // 從 a-1 開始往下找到第一個質數
    while (ans > 1 && !is_prime(ans)) {
        ans -= 1;
    }
    
    printf("%d\n", ans);  // 輸出小於 a 的最大質數
    return 0;
}
