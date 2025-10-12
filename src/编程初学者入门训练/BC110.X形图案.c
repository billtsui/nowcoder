/**
 * @nc app=nowcoder id=83d6afe3018e44539c51265165806ee4 topic=290 question=309117 lang=C
 * 2025-10-12 14:02:43
 * https://www.nowcoder.com/practice/83d6afe3018e44539c51265165806ee4?tpId=290&tqId=309117
 * [BC110] X形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short rows;
    while (scanf("%hd", &rows) != EOF) {
        for (short i = 0; i < rows; i++) {
            for (short j = 0; j < rows; j++) {
                if (i == j || i + j == rows - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
