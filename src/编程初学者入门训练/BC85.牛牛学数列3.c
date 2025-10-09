/**
 * @nc app=nowcoder id=f65c726d081c4160a9356eabf0dc21d9 topic=290 question=310694 lang=C
 * 2025-10-09 10:10:24
 * https://www.nowcoder.com/practice/f65c726d081c4160a9356eabf0dc21d9?tpId=290&tqId=310694
 * [BC85] 牛牛学数列3
 */

/** @nc code=start */

#include <math.h>
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    double sum = 0.0f;

    for (int i = 1; i <= 2 * num - 1; i++) {
        if (i == 1 || i % 2 != 0) {
            float denominator = 0.0f;
            int expon = 1;
            for (int j = 0; j <= i; j++) {
                if (j == 1 || j % 2 != 0) {
                    denominator += j * pow(-1, expon - 1);
                    expon++;
                }
            }
            //printf("%d %f\n", i, denominator);

            sum += 1.0 / denominator;
        }
    }

    printf("%.3lf\n", sum);
    return 0;
}

/** @nc code=end */
