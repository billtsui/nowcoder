/**
 * @nc app=nowcoder id=1c0ce3c9134f45edbcd4343f9d5e320a topic=290 question=308928 lang=C
 * 2025-09-27 10:57:45
 * https://www.nowcoder.com/practice/1c0ce3c9134f45edbcd4343f9d5e320a?tpId=290&tqId=308928
 * [BC27] 整数的个位
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    if(a<0) a = -a;
    printf("%d\n", a % 10);
    return 0;
}

/** @nc code=end */
