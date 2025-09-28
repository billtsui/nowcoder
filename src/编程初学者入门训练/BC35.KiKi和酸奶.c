/**
 * @nc app=nowcoder id=c7721f3a1b1a47a783974453e82cadbb topic=290 question=292288 lang=C
 * 2025-09-28 09:57:32
 * https://www.nowcoder.com/practice/c7721f3a1b1a47a783974453e82cadbb?tpId=290&tqId=292288
 * [BC35] KiKi和酸奶
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int n, h, m;
    scanf("%d %d %d", &n, &h, &m);
    int openedNum = (m % h) > 0 ? (m / h) + 1 : m / h;
    printf("%d\n", n - openedNum);
    return 0;
}

/** @nc code=end */
