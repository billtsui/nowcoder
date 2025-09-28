/**
 * @nc app=nowcoder id=109a44d649a142d483314e8a57e2c710 topic=290 question=292284 lang=C
 * 2025-09-28 09:50:20
 * https://www.nowcoder.com/practice/109a44d649a142d483314e8a57e2c710?tpId=290&tqId=292284
 * [BC34] 计算三角形的周长和面积
 */

/** @nc code=start */

#include <math.h>
#include <stdio.h>

int main() {
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);
    float circumference = side1 + side2 + side3;
    float area = 0.0;
    area = 0.5 * circumference;
    area = area * (area - side1) * (area - side2) * (area - side3);
    area = sqrt(area);
    printf("circumference=%.2f area=%.2f\n", circumference, area);
    return 0;
}

/** @nc code=end */
