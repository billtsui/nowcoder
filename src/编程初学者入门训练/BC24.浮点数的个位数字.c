/**
 * @nc app=nowcoder id=ffa94d27c6534396aef38813535c279f topic=290 question=292279 lang=C
 * 2025-09-27 10:37:24
 * https://www.nowcoder.com/practice/ffa94d27c6534396aef38813535c279f?tpId=290&tqId=292279
 * [BC24] 浮点数的个位数字
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);
    int intPart = (int)num;       // 获取整数部分
    int lastDigit = intPart % 10; // 获取个位数字
    printf("%d", lastDigit);
    return 0;
}

/** @nc code=end */
