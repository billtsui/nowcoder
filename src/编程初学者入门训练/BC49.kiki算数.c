/**
 * @nc app=nowcoder id=bcaf710fb58a44e1b678a890e6e90d7c topic=290 question=292278 lang=C
 * 2025-09-30 14:02:43
 * https://www.nowcoder.com/practice/bcaf710fb58a44e1b678a890e6e90d7c?tpId=290&tqId=292278
 * [BC49] kiki算数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (a + b) % 100);
    return 0;
}

/** @nc code=end */
