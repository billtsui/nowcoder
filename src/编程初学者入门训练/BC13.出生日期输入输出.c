/**
 * @nc app=nowcoder id=4a4a9dd1edb6453ba4a0432319200743 topic=290 question=275034 lang=C
 * 2025-09-26 16:43:01
 * https://www.nowcoder.com/practice/4a4a9dd1edb6453ba4a0432319200743?tpId=290&tqId=275034
 * [BC13] 出生日期输入输出
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int year, month, day = 0;

    scanf("%4d%2d%2d", &year, &month, &day);
    printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, day);
    return 0;
}

/** @nc code=end */
