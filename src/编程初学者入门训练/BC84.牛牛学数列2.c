/**
 * @nc app=nowcoder id=fc72951f52984f3abd286d82eeffacba topic=290 question=310693 lang=C
 * 2025-10-09 10:04:36
 * https://www.nowcoder.com/practice/fc72951f52984f3abd286d82eeffacba?tpId=290&tqId=310693
 * [BC84] 牛牛学数列2
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    double sum = 0.00;
    for (int i = 1; i <= num; i++) {
        sum = sum + (1.0 / i * 1.0);
    }

    printf("%lf", sum);

    return 0;
}

/** @nc code=end */
