/**
 * @nc app=nowcoder id=5d7dfd405e5f4e4fbfdff6862c46b751 topic=290 question=295428 lang=C
 * 2025-09-30 15:04:49
 * https://www.nowcoder.com/practice/5d7dfd405e5f4e4fbfdff6862c46b751?tpId=290&tqId=295428
 * [BC63] 网购
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    float price;
    int month, day, hasDiscount;
    scanf("%f %d %d %d", &price, &month, &day, &hasDiscount);
    if (month == 11 && day == 11) {
        price *= 0.7;
    }
    if (month == 12 && day == 12) {
        price *= 0.8;
    }

    if ((month == 11 && day == 11) || (month == 12 && day == 12)) {
        if (hasDiscount) {
            if (price - 50 > 0) {
                price -= 50;
            } else {
                price = 0;
            }
        }
    }
    printf("%.2f\n", price);
    return 0;
}

/** @nc code=end */
