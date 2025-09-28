/**
 * @nc app=nowcoder id=0f7e422e12be4a7f9958ca2a82abc775 topic=290 question=632014 lang=C
 * 2025-09-28 10:40:13
 * https://www.nowcoder.com/practice/0f7e422e12be4a7f9958ca2a82abc775?tpId=290&tqId=632014
 * [BC42] 小乐乐定闹钟
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int hour, minute;
    int minutesToAdd;
    scanf("%d:%d %d", &hour, &minute, &minutesToAdd);
    hour = minutesToAdd / 60 + hour;
    minute = minutesToAdd % 60 + minute;
    if (minute >= 60) {
        minute -= 60;
        hour += 1;
    }
    if (hour >= 24) {
        hour %= 24;
    }
    printf("%02d:%02d\n", hour, minute);
    return 0;
}

/** @nc code=end */
