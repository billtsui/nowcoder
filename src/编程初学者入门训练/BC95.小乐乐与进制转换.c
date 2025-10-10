/**
 * @nc app=nowcoder id=242eafef2a704c0ca130d563b7b3ee2d topic=290 question=632012 lang=C
 * 2025-10-10 17:54:12
 * https://www.nowcoder.com/practice/242eafef2a704c0ca130d563b7b3ee2d?tpId=290&tqId=632012
 * [BC95] 小乐乐与进制转换
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int numDecimal;
    scanf("%d", &numDecimal);

    int reminder = 0;
    long base = 1;
    long long result = 0;
    do {
        reminder = numDecimal % 6;
        // printf("%d%%6 =%d ", numDecimal, reminder);
        result += reminder * base;
        // printf(" result=%lld\n", result);
        numDecimal /= 6;
        base *= 10;
    } while (reminder < 6 && numDecimal != 0);
    printf("%lld\n", result);

    return 0;
}

/** @nc code=end */
