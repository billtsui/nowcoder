/**
 * @nc app=nowcoder id=db41a6ce80a646aa9a5eb6252ac2df76 topic=290 question=310754 lang=C
 * 2025-10-10 16:20:41
 * https://www.nowcoder.com/practice/db41a6ce80a646aa9a5eb6252ac2df76?tpId=290&tqId=310754
 * [BC88] 魔法数字变换
 */

/** @nc code=start */

#include <stdio.h>
#define MAGIC_NUMBER 1

int main() {
    int num = 0;
    scanf("%d", &num);

    int step = 0;
    do {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
        step++;
    } while (num != MAGIC_NUMBER);

    printf("%d\n", step);
    return 0;
}

/** @nc code=end */
