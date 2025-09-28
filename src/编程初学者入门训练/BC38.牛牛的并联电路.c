/**
 * @nc app=nowcoder id=6e13936b6fc54f52ac22efd6c8e7fef3 topic=290 question=2367375 lang=C
 * 2025-09-28 10:14:26
 * https://www.nowcoder.com/practice/6e13936b6fc54f52ac22efd6c8e7fef3?tpId=290&tqId=2367375
 * [BC38] 牛牛的并联电路
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double r = 1.0 / (1.0 / a + 1.0 / b);
    printf("%.1f\n", r);
    return 0;
}

/** @nc code=end */
