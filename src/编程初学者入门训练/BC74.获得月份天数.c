/**
 * @nc app=nowcoder id=13aeae34f8ed4697960f7cfc80f9f7f6 topic=290 question=307623 lang=C
 * 2025-10-04 13:53:04
 * https://www.nowcoder.com/practice/13aeae34f8ed4697960f7cfc80f9f7f6?tpId=290&tqId=307623
 * [BC74] 获得月份天数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int year, month;
    while (scanf("%d %d\n", &year, &month) != EOF) {
        if (month < 1 || month > 12) {
            printf("Invalid month");
            break;
        }
        int days;
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        }
        printf("%d\n", days);
    }
    return 0;
}

/** @nc code=end */
