/**
 * @nc app=nowcoder id=7b066963c4eb4d188becd18c37dfe22d topic=290 question=309115 lang=C
 * 2025-10-12 13:45:24
 * https://www.nowcoder.com/practice/7b066963c4eb4d188becd18c37dfe22d?tpId=290&tqId=309115
 * [BC108] 反斜线形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short rows;
    while (scanf("%hd", &rows) != EOF) {
        for (short i = 0; i < rows; i++) {
            for (short j = 0; j < i; j++) {
                printf(" ");
            }

            printf("*");
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
