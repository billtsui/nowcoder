/**
 * @nc app=nowcoder id=9cc35bd0754f4feca18e10e57c672467 topic=290 question=967208 lang=C
 * 2025-09-28 09:24:47
 * https://www.nowcoder.com/practice/9cc35bd0754f4feca18e10e57c672467?tpId=290&tqId=967208
 * [BC29] 开学？
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int day, delayDays;
    scanf("%d %d", &day, &delayDays);
    if (day < 1 || day > 7) {
        printf("input error\n");
        return 0;
    }

    int newDay = (day + delayDays) % 7;
    if (newDay == 0) {
        newDay = 7;
    }
    printf("%d\n", newDay);

    return 0;
}

/** @nc code=end */
