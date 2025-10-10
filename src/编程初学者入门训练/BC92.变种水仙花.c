/**
 * @nc app=nowcoder id=c178e3f5cc4641dfbc8b020ae79e2b71 topic=290 question=295429 lang=C
 * 2025-10-10 17:03:04
 * https://www.nowcoder.com/practice/c178e3f5cc4641dfbc8b020ae79e2b71?tpId=290&tqId=295429
 * [BC92] 变种水仙花
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int count;
    for (int i = 10000; i <= 99999; i++) {
        int a = i / 10000;      // 万位
        int a1 = i - a * 10000; // 万位剩下的数字
        int aResult = a * a1;

        int b = i / 1000;      // 千位
        int b1 = i - b * 1000; // 千位剩下的数字

        int c = i / 100;      // 百位
        int c1 = i - c * 100; // 百位剩下的数字

        int d = i / 10;      // 十位
        int d1 = i - d * 10; // 十位剩下的数字
        if (i == a * a1 + b * b1 + c * c1 + d * d1) {
            printf("%d ", i);
        }
        // printf("%d*%d + %d*%d + %d*%d + %d*%d\n", a, a1, b, b1, c, c1, d, d1);
    }

    printf("\n");

    return 0;
}

/** @nc code=end */
