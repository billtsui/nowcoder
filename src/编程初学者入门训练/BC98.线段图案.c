/**
 * @nc app=nowcoder id=a95744270f274a14a8a0dafe10421589 topic=290 question=309105 lang=C
 * 2025-10-11 09:16:37
 * https://www.nowcoder.com/practice/a95744270f274a14a8a0dafe10421589?tpId=290&tqId=309105
 * [BC98] 线段图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short length;
    while(scanf("%hd", &length) != EOF) {
        for(short i = 0; i < length; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/** @nc code=end */
