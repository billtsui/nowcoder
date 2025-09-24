#include <stdio.h>

int main(void) {
    char readChar = 'a';
    scanf("%c", &readChar);
    int row = 13, column = 13;
    int charNum = 1;
    for (int i = 0; i < row; i++) {
        // printf("charNum:%d ", charNum);
        int spaceNum = column - charNum;
        int charIndex = spaceNum / 2;
        // printf("spaceNum:%d   ", spaceNum);
        // printf("%d-%d ", charIndex, charIndex + charNum - 1);
        for (int j = 0; j < column; j++) {
            if (spaceNum != 0 && (j < charIndex || j > (charIndex + charNum - 1))) {
                printf(" ");
            } else {
                printf("%c", readChar);
            }
        }
        if (i < row / 2) {
            charNum += 2;
        } else {
            charNum -= 2;
        }
        printf("\n");
    }
    return 0;
}
