/**
 * @nc app=nowcoder id=c196c47c23394bf3bdd4f82a838df6bf topic=290 question=2367414 lang=C
 * 2025-09-28 10:16:06
 * https://www.nowcoder.com/practice/c196c47c23394bf3bdd4f82a838df6bf?tpId=290&tqId=2367414
 * [BC39] 牛牛的水杯
 */

/** @nc code=start */

#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.14;
    int height, radius;
    scanf("%d %d", &height, &radius);
    float volume = pi * radius * radius * height;
    printf("%.0f\n", ceil(10000.0 / volume));
    return 0;
}

/** @nc code=end */
