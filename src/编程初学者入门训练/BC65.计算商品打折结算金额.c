/**
 * @nc app=nowcoder id=055a92b5c93f497291a58c232f59fae9 topic=290 question=2177544 lang=C
 * 2025-10-04 09:31:15
 * https://www.nowcoder.com/practice/055a92b5c93f497291a58c232f59fae9?tpId=290&tqId=2177544
 * [BC65] 计算商品打折结算金额
 */

/** @nc code=start */

#include <stdio.h>
#define DISCOUNT_RATE_9 0.90
#define DISCOUNT_RATE_8 0.80
#define DISCOUNT_RATE_7 0.70
#define DISCOUNT_RATE_6 0.60
#define DISCOUNT_START_100 100.0
#define DISCOUNT_START_500 500.0
#define DISCOUNT_START_2000 2000.0
#define DISCOUNT_START_5000 5000.0

int main() {
    float price = 0.0;
    scanf("%f", &price);
    if (price - DISCOUNT_START_5000 >= 0) {
        price = price * DISCOUNT_RATE_6;
        goto print_price;
    }

    if (price - DISCOUNT_START_2000 >= 0) {
        price = price * DISCOUNT_RATE_7;
        goto print_price;
    }

    if (price - DISCOUNT_START_500 >= 0) {
        price = price * DISCOUNT_RATE_8;
        goto print_price;
    }
    if (price - DISCOUNT_START_100 >= 0) {
        price = price * DISCOUNT_RATE_9;
        goto print_price;
    }

print_price:
    printf("%.1f\n", price);
    return 0;
}

/** @nc code=end */
