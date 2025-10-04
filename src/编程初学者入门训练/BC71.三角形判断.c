/**
 * @nc app=nowcoder id=689ec1e742394e09b1059556fc167b65 topic=290 question=307620 lang=C
 * 2025-10-04 10:50:03
 * https://www.nowcoder.com/practice/689ec1e742394e09b1059556fc167b65?tpId=290&tqId=307620
 * [BC71] 三角形判断
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int side1, side2, side3;
    while (scanf("%d %d %d\n", &side1, &side2, &side3) != EOF) {
        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
            if (side1 == side2 && side2 == side3) {
                printf("Equilateral triangle!\n");
            } else if (side1 == side2 || side1 == side3 || side2 == side3) {
                printf("Isosceles triangle!\n");
            } else {
                printf("Ordinary triangle!\n");
            }
        } else {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}

/** @nc code=end */
