/**
 * @nc app=nowcoder id=d84e8339f9444bb6b29bd3f227c8e538 topic=290 question=309110 lang=C
 * 2025-10-11 10:40:52
 * https://www.nowcoder.com/practice/d84e8339f9444bb6b29bd3f227c8e538?tpId=290&tqId=309110
 * [BC103] 金字塔图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short sideLength;
    while (scanf("%hd", &sideLength) != EOF) {
        for (int i = 0; i < sideLength; i++) {
            for (int j = 0; j < sideLength - i - 1; j++) {
                printf(" ");
            }
            for (int k = 0; k <= i; k++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
