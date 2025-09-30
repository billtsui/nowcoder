/**
 * @nc app=nowcoder id=a7bcbe3cb86f435d9617dfdd20a16714 topic=290 question=309000 lang=C
 * 2025-09-30 14:10:31
 * https://www.nowcoder.com/practice/a7bcbe3cb86f435d9617dfdd20a16714?tpId=290&tqId=309000
 * [BC55] 判断闰年
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int year;
    int check1, check2;
    scanf("%d", &year);
    check1 = year % 400 == 0;
    check2 = year % 4 == 0 && year % 100 != 0;
    if (check1 || check2) {
        printf("%s\n", "yes");
    } else {
        printf("%s\n", "no");
    }
    return 0;
}

/** @nc code=end */
