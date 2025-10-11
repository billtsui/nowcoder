/**
 * @nc app=nowcoder id=1304bb23c2e344989d5c7a578d263e4c topic=290 question=309106 lang=C
 * 2025-10-11 09:54:48
 * https://www.nowcoder.com/practice/1304bb23c2e344989d5c7a578d263e4c?tpId=290&tqId=309106
 * [BC99] 正方形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short length;
    while (scanf("%hd", &length) != EOF) {
        for (short i = 0; i < length; i++) {
            for (short j = 0; j < length; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
