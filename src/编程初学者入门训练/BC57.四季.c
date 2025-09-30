/**
 * @nc app=nowcoder id=eaf21203b61b4a689987fdc165d00dfc topic=290 question=1189147 lang=C
 * 2025-09-30 14:19:40
 * https://www.nowcoder.com/practice/eaf21203b61b4a689987fdc165d00dfc?tpId=290&tqId=1189147
 * [BC57] 四季
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    int result = year % 100;
    if (result >= 3 && result <= 5) {
        printf("spring\n");
    } else if (result >= 6 && result <= 8) {
        printf("summer\n");
    } else if (result >= 9 && result <= 11) {
        printf("autumn\n");
    } else {
        printf("winter\n");
    }
    return 0;
}

/** @nc code=end */
