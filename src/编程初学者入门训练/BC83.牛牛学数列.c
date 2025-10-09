/**
 * @nc app=nowcoder id=0b97367cd2184c12a0e02f7c223aee11 topic=290 question=310692 lang=C
 * 2025-10-09 09:46:20
 * https://www.nowcoder.com/practice/0b97367cd2184c12a0e02f7c223aee11?tpId=290&tqId=310692
 * [BC83] 牛牛学数列
 */

/** @nc code=start */

#include <math.h>
#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        sum += (i * pow(-1, i - 1));
    }
    printf("%d", sum);

    return 0;
}

/** @nc code=end */
