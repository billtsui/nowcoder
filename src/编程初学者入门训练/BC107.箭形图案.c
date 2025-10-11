/**
 * @nc app=nowcoder id=a6d1081e0c9a42f19e42ed6cd91556c1 topic=290 question=309114 lang=C
 * 2025-10-11 18:13:29
 * https://www.nowcoder.com/practice/a6d1081e0c9a42f19e42ed6cd91556c1?tpId=290&tqId=309114
 * [BC107] 箭形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short rows;
    while (scanf("%hd", &rows) != EOF) {
        for (short i = 0; i < rows + 1; i++) {
            for (short j = 0; j < rows * 2 - i * 2; j++) {
                printf(" ");
            }

            for (short k = 0; k <= i; k++) {
                printf("*");
            }
            printf("\n");
        }

        for (short l = 0; l < rows; l++) {
            for (short m = 0; m < (l + 1) * 2; m++) {
                printf(" ");
            }

            for (short n = 0; n < rows - l; n++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
