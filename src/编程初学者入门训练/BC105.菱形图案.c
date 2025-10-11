/**
 * @nc app=nowcoder id=8b935f8ffe99445dbd42494febd13e45 topic=290 question=309112 lang=C
 * 2025-10-11 14:06:32
 * https://www.nowcoder.com/practice/8b935f8ffe99445dbd42494febd13e45?tpId=290&tqId=309112
 * [BC105] 菱形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int sideLength;
    while (scanf("%hd", &sideLength) != EOF) {
        for (short i = 0; i < sideLength + 1; i++) {
            for (short j = 0; j < sideLength - i; j++) {
                printf(" ");
            }

            for (short k = 0; k <= i; k++) {
                printf("* ");
            }
            printf("\n");
        }

        for (short i = 0; i < sideLength; i++) {
            for (short k = 0; k <= i; k++) {
                printf(" ");
            }
            for (short j = 0; j < sideLength - i; j++) {
                printf("* ");
            }

            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
