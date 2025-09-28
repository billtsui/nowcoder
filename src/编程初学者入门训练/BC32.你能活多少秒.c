/**
 * @nc app=nowcoder id=e1d1bd99fee34b66ae3c777b74d555c8 topic=290 question=292280 lang=C
 * 2025-09-28 09:34:06
 * https://www.nowcoder.com/practice/e1d1bd99fee34b66ae3c777b74d555c8?tpId=290&tqId=292280
 * [BC32] 你能活多少秒
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    double seconds_in_a_year = 3.156e7;
    int age;
    scanf("%d", &age);
    printf("%ld\n", (long)(age * seconds_in_a_year));
    return 0;
}

/** @nc code=end */
