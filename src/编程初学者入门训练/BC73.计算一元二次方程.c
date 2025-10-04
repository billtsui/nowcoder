/**
 * @nc app=nowcoder id=7da524bb452441b2af7e64545c38dc26 topic=290 question=307622 lang=C
 * 2025-10-04 11:28:35
 * https://www.nowcoder.com/practice/7da524bb452441b2af7e64545c38dc26?tpId=290&tqId=307622
 * [BC73] 计算一元二次方程
 */

/** @nc code=start */

#include <math.h>
#include <stdio.h>

int main() {
    float para1, para2, para3;
    float root1, root2;
    float real_part, imag_part;

    while (scanf("%f %f %f\n", &para1, &para2, &para3) != EOF) {
        if (para1 == 0) {
            printf("Not quadratic equation");
            break;
        }
        float delta = para2 * para2 - 4 * para1 * para3;

        if (delta < 0) {
            real_part = -para2 / (2 * para1);
            imag_part = sqrt(-delta) / (2 * para1);
            if(real_part == -0)
                real_part = 0; // -0的情况
            printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", real_part, imag_part, real_part, imag_part);
        }

        if (delta == 0) {
            root1 = root2 = -para2 / (2 * para1);
            if (root1 == -0)
                root1 = 0; // -0的情况
            printf("x1=x2=%.2f\n", root1);
        }

        if (delta > 0) {
            root1 = (-para2 + sqrt(delta)) / (2 * para1);
            root2 = (-para2 - sqrt(delta)) / (2 * para1);
            if (root1 > root2) {
                float temp = root1;
                root1 = root2;
                root2 = temp;
            }
            printf("x1=%.2f;x2=%.2f\n", root1, root2);
        }
    }
    return 0;
}

/** @nc code=end */
