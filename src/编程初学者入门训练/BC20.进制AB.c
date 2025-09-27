/**
 * @nc app=nowcoder id=6187581174ac48278ca3bccf8d534897 topic=290 question=295415 lang=C
 * 2025-09-27 10:08:36
 * https://www.nowcoder.com/practice/6187581174ac48278ca3bccf8d534897?tpId=290&tqId=295415
 * [BC20] 进制A+B
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int hexNum1, octNum1;
    scanf("%x %o", &hexNum1, &octNum1);
    int sum = hexNum1 + octNum1;
    printf("%d", sum);
    return 0;
}

/** @nc code=end */
