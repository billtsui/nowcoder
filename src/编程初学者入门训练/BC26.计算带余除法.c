/**
 * @nc app=nowcoder id=34d3911bf2fd48a285f6396e886a1259 topic=290 question=292276 lang=C
 * 2025-09-27 10:54:23
 * https://www.nowcoder.com/practice/34d3911bf2fd48a285f6396e886a1259?tpId=290&tqId=292276
 * [BC26] 计算带余除法
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int a, b =0;
    scanf("%d %d", &a, &b);
    int quotient = a / b;  // 商
    int remainder = a % b; // 余数
    printf("%d %d", quotient, remainder);
    return 0;
}

/** @nc code=end */
