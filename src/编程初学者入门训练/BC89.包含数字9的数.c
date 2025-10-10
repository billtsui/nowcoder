/**
 * @nc app=nowcoder id=0948f4f3344c452f843afd3585dd0f8d topic=290 question=320953 lang=C
 * 2025-10-10 16:24:17
 * https://www.nowcoder.com/practice/0948f4f3344c452f843afd3585dd0f8d?tpId=290&tqId=320953
 * [BC89] 包含数字9的数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i <= 2019; i++) {
        if (i % 10 == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9 || (i / 1000) % 10 == 9) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

/** @nc code=end */
