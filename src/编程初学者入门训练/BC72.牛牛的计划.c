/**
 * @nc app=nowcoder id=cf956ceef9f84f7393a0b7284fdbf95a topic=290 question=2368315 lang=C
 * 2025-10-04 10:54:48
 * https://www.nowcoder.com/practice/cf956ceef9f84f7393a0b7284fdbf95a?tpId=290&tqId=2368315
 * [BC72] 牛牛的计划
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int year, month, day;
    int current_year, current_month, current_day;
    scanf("%d %d %d\n%d %d %d", &year, &month, &day, &current_year, &current_month, &current_day);
    if (current_year > year || (current_year == year && current_month > month) ||
        (current_year == year && current_month == month && current_day >= day)) {
        printf("%s\n", "yes");
    } else {
        printf("%s\n", "no");
    }
    return 0;
}

/** @nc code=end */
