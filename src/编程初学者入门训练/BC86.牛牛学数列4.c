/**
 * @nc app=nowcoder id=586b114f52034688879342ba45779081 topic=290 question=310695 lang=C
 * 2025-10-09 11:38:49
 * https://www.nowcoder.com/practice/586b114f52034688879342ba45779081?tpId=290&tqId=310695
 * [BC86] 牛牛学数列4
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        int partSum = 0;
        for (int j = 1; j <= i; j++) {
            partSum += j;
        }
        sum += partSum;
    }

    printf("%d", sum);
    return 0;
}

/** @nc code=end */
