/**
 * @nc app=nowcoder id=d3a404ee0f8d41f98bf4707035d91086 topic=290 question=828862 lang=C
 * 2025-10-09 09:27:09
 * https://www.nowcoder.com/practice/d3a404ee0f8d41f98bf4707035d91086?tpId=290&tqId=828862
 * [BC81] KiKi求质数个数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 100; i <= 999; i++) {
        int n = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                n = 0;
                break;
            }
        }
        if (n) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}

/** @nc code=end */
