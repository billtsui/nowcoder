/**
 * @nc app=nowcoder id=2dbf0151eb71402e968a2a8e59092568 topic=290 question=2367010 lang=C
 * 2025-09-26 16:38:43
 * https://www.nowcoder.com/practice/2dbf0151eb71402e968a2a8e59092568?tpId=290&tqId=2367010
 * [BC7] 牛牛的字符矩形
 */

/** @nc code=start */

#include <stdio.h>

int main() {
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

/** @nc code=end */
