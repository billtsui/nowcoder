/**
 * @nc app=nowcoder id=5394d88a8fa042d99e3b9be34e17ad71 topic=290 question=2368404 lang=C
 * 2025-10-04 10:40:58
 * https://www.nowcoder.com/practice/5394d88a8fa042d99e3b9be34e17ad71?tpId=290&tqId=2368404
 * [BC68] 牛牛的一周
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int day = 0;
    scanf("%d", &day);
    switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
    }
    return 0;
}

/** @nc code=end */
