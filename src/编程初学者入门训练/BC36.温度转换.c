/**
 * @nc app=nowcoder id=ba83647087b7447783fa2384da6b3d44 topic=290 question=308992 lang=C
 * 2025-09-28 10:06:39
 * https://www.nowcoder.com/practice/ba83647087b7447783fa2384da6b3d44?tpId=290&tqId=308992
 * [BC36] 温度转换
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.0) * 5 / 9.0;
    printf("%.3f\n", celsius);
    return 0;
}

/** @nc code=end */
