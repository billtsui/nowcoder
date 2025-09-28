/**
 * @nc app=nowcoder id=c4ae7bcac7f9491b8be82ee516a94899 topic=290 question=292281 lang=C
 * 2025-09-28 09:27:42
 * https://www.nowcoder.com/practice/c4ae7bcac7f9491b8be82ee516a94899?tpId=290&tqId=292281
 * [BC30] 时间转换
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int seconds;
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;
    printf("%d %d %d\n", hours, minutes, secs);
    return 0;
}

/** @nc code=end */
