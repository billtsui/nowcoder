#include <stdio.h>

int main(void) {
    char readChar = 'a';
    scanf("%c", &readChar);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c", readChar);
        }
        printf("\n");
    }
    return 0;
}
