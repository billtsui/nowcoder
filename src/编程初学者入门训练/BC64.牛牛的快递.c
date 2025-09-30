/**
 * @nc app=nowcoder id=41b42e7b3c3547e3acf8e90c41d98270 topic=290 question=2368469 lang=C
 * 2025-09-30 15:11:11
 * https://www.nowcoder.com/practice/41b42e7b3c3547e3acf8e90c41d98270?tpId=290&tqId=2368469
 * [BC64] 牛牛的快递
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    float weight;
    char isFast;
    float price = 0.0;
    scanf("%f %c", &weight, &isFast);

    if (weight <= 1) {
        price = 20.0;
    } else {
        float extraWeight = weight - 1;
        int intExtraWeight = (int)extraWeight;
        if (extraWeight > intExtraWeight * 1.0) {
            extraWeight = intExtraWeight + 1;
        }
        price = 20.0 + extraWeight;
    }
    if (isFast == 'y') {
        price += 5.0;
    }

    printf("%d\n", (int)price);
    return 0;
}

/** @nc code=end */
