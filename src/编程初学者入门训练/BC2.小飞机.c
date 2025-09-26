/**
 * @nc app=nowcoder id=5cd9598f28f74521805d2069ce4a108a topic=290 question=274324 lang=C
 * 2025-09-26 16:33:05
 * https://www.nowcoder.com/practice/5cd9598f28f74521805d2069ce4a108a?tpId=290&tqId=274324
 * [BC2] 小飞机
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int row = 6, column = 12;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            if ((i == 1 || i == 2) && (j <= 5 || j >= 8)) {
                printf(" ");
            } else if ((i == 5 || i == 6) && (j != 5 && j != 8)) {
                printf(" ");
            } else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}

/** @nc code=end */
