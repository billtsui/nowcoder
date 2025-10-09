/**
 * @nc app=nowcoder id=ff797e49df674c049021e8be2ab026e6 topic=290 question=311079 lang=C
 * 2025-10-09 09:38:53
 * https://www.nowcoder.com/practice/ff797e49df674c049021e8be2ab026e6?tpId=290&tqId=311079
 * [BC82] 乘法表
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int row = 9, column = 9;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d", j, i, i * j);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

/** @nc code=end */
