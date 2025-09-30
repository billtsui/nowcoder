/**
 * @nc app=nowcoder id=9df4b80fc3ab475288e5c26972440e1b topic=290 question=320950 lang=C
 * 2025-09-30 13:50:47
 * https://www.nowcoder.com/practice/9df4b80fc3ab475288e5c26972440e1b?tpId=290&tqId=320950
 * [BC47] (a+b-c)*d的计算问题
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    int result = (num1 + num2 - num3) * num4;
    printf("%d\n", result);
    return 0;
}

/** @nc code=end */
