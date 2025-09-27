/**
 * @nc app=nowcoder id=031db23916904f4fad72198fe491b47b topic=290 question=308929 lang=C
 * 2025-09-27 11:04:36
 * https://www.nowcoder.com/practice/031db23916904f4fad72198fe491b47b?tpId=290&tqId=308929
 * [BC28] 整数的十位
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int a = -1;
    scanf("%d", &a);
    if (a < 0) a = -a;
    printf("%d\n", (a / 10) % 10);
    return 0;
}

/** @nc code=end */
