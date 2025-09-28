/**
 * @nc app=nowcoder id=fb9daba67b88437a9e501adf020d425e topic=290 question=2367495 lang=C
 * 2025-09-28 10:32:23
 * https://www.nowcoder.com/practice/fb9daba67b88437a9e501adf020d425e?tpId=290&tqId=2367495
 * [BC40] 牛牛的等差数列
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int item1, item2;
    scanf("%d %d", &item1, &item2);
    int d = item2 - item1;
    printf("%d\n", item2 + d);
    return 0;
}

/** @nc code=end */
