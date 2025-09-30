/**
 * @nc app=nowcoder id=08b28e61ff6345febf09969b3a167f7e topic=290 question=295418 lang=C
 * 2025-09-30 14:31:33
 * https://www.nowcoder.com/practice/08b28e61ff6345febf09969b3a167f7e?tpId=290&tqId=295418
 * [BC58] 健康评估
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    float weight;
    float height;
    scanf("%f %f", &weight, &height);
    float bmi = weight / (height * height);
    if (bmi >= 18.5 && bmi <= 23.9) {
        printf("%s\n", "Normal");
    } else {
        printf("%s\n", "Abnormal");
    }
    return 0;
}

/** @nc code=end */
