/**
 * @nc app=nowcoder id=35a1e8b18658411388bc1672439de1d9 topic=290 question=292287 lang=C
 * 2025-09-28 09:30:06
 * https://www.nowcoder.com/practice/35a1e8b18658411388bc1672439de1d9?tpId=290&tqId=292287
 * [BC31] 2的n次方计算
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int exponent;
    scanf("%d", &exponent);
    exponent -= 1;
    printf("%d\n", 2 << exponent);
    return 0;
}

/** @nc code=end */
