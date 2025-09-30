/**
 * @nc app=nowcoder id=f72c56ed71664af082c921bf79861c85 topic=290 question=2367473 lang=C
 * 2025-09-30 13:51:40
 * https://www.nowcoder.com/practice/f72c56ed71664af082c921bf79861c85?tpId=290&tqId=2367473
 * [BC48] 牛牛的线段
 */

/** @nc code=start */
#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    scanf("%d %d\n%d %d", &num1, &num2, &num3, &num4);
    printf("%d\n", (num1 - num3) * (num1 - num3) + (num2 - num4) * (num2 - num4));
    return 0;
}

/** @nc code=end */
