/**
 * @nc app=nowcoder id=203ca3114f8845a9bbd673bae6c5dd2b topic=290 question=2367592 lang=C
 * 2025-09-28 10:34:47
 * https://www.nowcoder.com/practice/203ca3114f8845a9bbd673bae6c5dd2b?tpId=290&tqId=2367592
 * [BC41] 牛牛的球
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    float radius;
    scanf("%f", &radius);
    printf("%.2f\n", 4 / 3.0 * 3.14 * radius * radius * radius);
    return 0;
}

/** @nc code=end */
