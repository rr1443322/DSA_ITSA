#include <stdio.h>
#include <stdlib.h>

int main() {
    char word;
    scanf("%c", &word);
    if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' || word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U') {
        printf("母音\n");    
    }
    else {
        printf("子音\n");
    }


	return 0;
}
