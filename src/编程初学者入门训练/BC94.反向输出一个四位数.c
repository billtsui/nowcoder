/**
 * @nc app=nowcoder id=1f7c1d67446e4361bf4af67c08e0b8b0 topic=290 question=292277 lang=C
 * 2025-10-10 17:41:44
 * https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0?tpId=290&tqId=292277
 * [BC94] 反向输出一个四位数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num >= 1000 && num <= 9999) {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        printf("%04d\n", reversed);
    }
    return 0;
}

/** @nc code=end */
