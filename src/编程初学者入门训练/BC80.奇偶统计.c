/**
 * @nc app=nowcoder id=04de8eb0ecab426fa6be3ae99af17210 topic=290 question=320954 lang=C
 * 2025-10-09 09:23:21
 * https://www.nowcoder.com/practice/04de8eb0ecab426fa6be3ae99af17210?tpId=290&tqId=320954
 * [BC80] 奇偶统计
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num = 0;
    int odd_count = 0, even_count = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("%d %d\n", odd_count, even_count);
    return 0;
}

/** @nc code=end */
