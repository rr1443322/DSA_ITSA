#include <stdio.h>
#include <stdlib.h>

int main() {
    long long second;
    scanf("%lld", &second);
    int day = 24*60*60;
    int hour = 60*60;
    int minute = 60;
    
    printf("%d days\n", second / day);
    second = second % day;

    printf("%d hours\n", second / hour); 
    second = second % hour;

    printf("%d minutes\n", second / minute);
    second = second % minute;

    printf("%d seconds\n", second);

	return 0;
}
