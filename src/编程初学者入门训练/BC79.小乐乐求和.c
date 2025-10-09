/**
 * @nc app=nowcoder id=ce0b2eacd3d04647831358c2876e44ff topic=290 question=632013 lang=C
 * 2025-10-09 09:22:23
 * https://www.nowcoder.com/practice/ce0b2eacd3d04647831358c2876e44ff?tpId=290&tqId=632013
 * [BC79] 小乐乐求和
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    long num, sum = 0;
    scanf("%d", &num);

    for (int i = 0; i <= num; i++) {
        sum += i;
    }
    printf("%ld\n", sum);
    return 0;
}

/** @nc code=end */
