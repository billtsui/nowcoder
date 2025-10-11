/**
 * @nc app=nowcoder id=192d1039c3d44155bb868073f5482670 topic=290 question=309109 lang=C
 * 2025-10-11 09:58:09
 * https://www.nowcoder.com/practice/192d1039c3d44155bb868073f5482670?tpId=290&tqId=309109
 * [BC102] 带空格直角三角形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int sideLength;
    while (scanf("%d", &sideLength) != EOF) {
        for (int i = 0; i < sideLength; i++) {
            for (int j = 0; j < sideLength; j++) {
                if (j < sideLength - i - 1) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }

            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
