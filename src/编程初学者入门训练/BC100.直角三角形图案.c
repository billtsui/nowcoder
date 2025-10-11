/**
 * @nc app=nowcoder id=00dd93f7c7074754b7511bf56d1f15ac topic=290 question=309107 lang=C
 * 2025-10-11 09:56:22
 * https://www.nowcoder.com/practice/00dd93f7c7074754b7511bf56d1f15ac?tpId=290&tqId=309107
 * [BC100] 直角三角形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int sideLength;
    while (scanf("%d", &sideLength) != EOF) {
        for (int i = 1; i <= sideLength; i++) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
