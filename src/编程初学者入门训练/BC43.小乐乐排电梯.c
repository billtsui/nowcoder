/**
 * @nc app=nowcoder id=0f855c7642b74cccb3c2366bb7732d2a topic=290 question=632015 lang=C
 * 2025-09-28 10:50:00
 * https://www.nowcoder.com/practice/0f855c7642b74cccb3c2366bb7732d2a?tpId=290&tqId=632015
 * [BC43] 小乐乐排电梯
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int people;
    int times = 0;
    scanf("%d", &people);

    if (people < 12) {
        times = 0;
    } else {
        times = people / 12;
    }
    printf("%d\n", times * 4 + 2);
    return 0;
}

/** @nc code=end */
