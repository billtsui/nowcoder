/**
 * @nc app=nowcoder id=11a5040fa894430f9d25fda1be37ddc8 topic=290 question=2367251 lang=C
 * 2025-09-26 16:40:34
 * https://www.nowcoder.com/practice/11a5040fa894430f9d25fda1be37ddc8?tpId=290&tqId=2367251
 * [BC8] 牛牛的字符菱形
 */

/** @nc code=start */

#include <stdio.h>

int main() {
   char readChar = 'a';
    scanf("%c", &readChar);
    int row = 5, column = 5;
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

/** @nc code=end */
