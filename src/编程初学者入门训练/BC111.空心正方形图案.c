/**
 * @nc app=nowcoder id=72347ee949dc47399186ee183632f303 topic=290 question=309118 lang=C
 * 2025-10-12 15:12:17
 * https://www.nowcoder.com/practice/72347ee949dc47399186ee183632f303?tpId=290&tqId=309118
 * [BC111] 空心正方形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short sideLength;
    while (scanf("%hd", &sideLength) != EOF) {
        for (short i = 0; i < sideLength; i++) {
            for (short j = 0; j < sideLength; j++) {
                if (i == 0 || i == sideLength - 1 || j == 0 || j == sideLength - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
