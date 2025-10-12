/**
 * @nc app=nowcoder id=61ef68d129534dfbb04b232e1244e447 topic=290 question=309116 lang=C
 * 2025-10-12 13:59:17
 * https://www.nowcoder.com/practice/61ef68d129534dfbb04b232e1244e447?tpId=290&tqId=309116
 * [BC109] 正斜线形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short rows;
    while (scanf("%hd", &rows) != EOF) {
        for (short i = 0; i < rows; i++) {
            for (short j = 0; j < rows - i - 1; j++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
