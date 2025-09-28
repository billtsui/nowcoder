/**
 * @nc app=nowcoder id=da13e0cf321e4df9acd0fdf0a433cbb0 topic=290 question=632016 lang=C
 * 2025-09-28 10:59:21
 * https://www.nowcoder.com/practice/da13e0cf321e4df9acd0fdf0a433cbb0?tpId=290&tqId=632016
 * [BC44] 小乐乐与欧几里得
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    long long num1, num2;
    scanf("%lld %lld", &num1, &num2);
    int gcd = 0;
    long long lcm = 0;
    long long sum = 0;

    int min = (num1 < num2 ? num1 : num2);

    for (int i = min; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }
    lcm = (num1 * num2) / gcd;
    sum = gcd + lcm;
    // printf("GCD: %d, LCM: %lld\n", gcd, lcm);
    printf("%lld\n", sum);

    return 0;
}

/** @nc code=end */
