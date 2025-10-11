/**
 * @nc app=nowcoder id=753cc2662d9949fe826a85f815db0ca4 topic=290 question=309113 lang=C
 * 2025-10-11 18:03:22
 * https://www.nowcoder.com/practice/753cc2662d9949fe826a85f815db0ca4?tpId=290&tqId=309113
 * [BC106] K形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short rows;
    while (scanf("%hd", &rows) != EOF) {
        for (short i = rows; i > 0; i--) {
            for (short j = 0; j < i + 1; j++) {
                printf("* ");
            }
            printf("\n");
        }

        for (short k = 0; k < rows + 1; k++) {
            for (short l = 0; l < k + 1; l++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
