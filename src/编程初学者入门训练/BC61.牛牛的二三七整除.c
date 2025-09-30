/**
 * @nc app=nowcoder id=b2cf0b791245436f8f0591ae9f4c664f topic=290 question=2368199 lang=C
 * 2025-09-30 14:45:23
 * https://www.nowcoder.com/practice/b2cf0b791245436f8f0591ae9f4c664f?tpId=290&tqId=2368199
 * [BC61] 牛牛的二三七整除
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);
    if (num1 % 2 == 0) {
        printf("2 ");
    }
    if (num1 % 3 == 0) {
        printf("3 ");
    }
    if (num1 % 7 == 0) {
        printf("7 ");
    }
    if (num1 % 2 != 0 && num1 % 3 != 0 && num1 % 7 != 0) {
        printf("n");
    }
    return 0;
}

/** @nc code=end */
