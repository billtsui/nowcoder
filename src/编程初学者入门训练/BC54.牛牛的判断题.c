/**
 * @nc app=nowcoder id=51a046c13b3c4b64a07d69903a3cd4cf topic=290 question=2368112 lang=C
 * 2025-09-30 14:08:41
 * https://www.nowcoder.com/practice/51a046c13b3c4b64a07d69903a3cd4cf?tpId=290&tqId=2368112
 * [BC54] 牛牛的判断题
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num, left, right;
    scanf("%d %d %d", &num, &left, &right);
    if (num >= left && num <= right) {
        printf("%s\n", "true");
    } else {
        printf("%s\n", "false");
    }
    return 0;
}

/** @nc code=end */
