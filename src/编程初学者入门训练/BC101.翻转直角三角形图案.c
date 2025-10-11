/**
 * @nc app=nowcoder id=2cdea429fa414fbba26e6c821724ca06 topic=290 question=309108 lang=C
 * 2025-10-11 09:57:20
 * https://www.nowcoder.com/practice/2cdea429fa414fbba26e6c821724ca06?tpId=290&tqId=309108
 * [BC101] 翻转直角三角形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int sideLength;
    while (scanf("%d", &sideLength) != EOF) {
        for (int i = sideLength; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
