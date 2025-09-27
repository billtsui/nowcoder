/**
 * @nc app=nowcoder id=0ad8f1c0d7b84c6d8c560298f91d5e66 topic=290 question=2367255 lang=C
 * 2025-09-27 10:53:02
 * https://www.nowcoder.com/practice/0ad8f1c0d7b84c6d8c560298f91d5e66?tpId=290&tqId=2367255
 * [BC25] 牛牛买电影票
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int friendNum = 0;
    int price = 100;
    scanf("%d", &friendNum);
    int totalCost = friendNum * price;
    printf("%d", totalCost);
    return 0;
}

/** @nc code=end */
