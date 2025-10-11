/**
 * @nc app=nowcoder id=c4775776e4464537bfb6a5ba37c596c6 topic=290 question=309111 lang=C
 * 2025-10-11 13:55:24
 * https://www.nowcoder.com/practice/c4775776e4464537bfb6a5ba37c596c6?tpId=290&tqId=309111
 * [BC104] 翻转金字塔图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short sideLength;
    while (scanf("%hd", &sideLength) != EOF) {
        for (short i = 0; i < sideLength; i++) {
            // 打印前导空格
            for (short j = 0; j < i; j++) {
                printf(" ");
            }

            for (short k = 0; k < sideLength - i; k++) {
                printf("* ");
            }

            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
