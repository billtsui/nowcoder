/**
 * @nc app=nowcoder id=cad8d946adf64ab3b17a555d68dc0bba topic=290 question=320955 lang=C
 * 2025-09-28 09:40:49
 * https://www.nowcoder.com/practice/cad8d946adf64ab3b17a555d68dc0bba?tpId=290&tqId=320955
 * [BC33] 统计成绩
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short num;
    float score1, score2, score3, score4, score5;
    float average;
    float max, min;
    float sum;
    while (scanf("%hd\n%f %f %f %f %f", &num, &score1, &score2, &score3, &score4, &score5) != EOF) {
        max = score1;
        min = score1;
        if (score2 > max) {
            max = score2;
        }
        if (score3 > max) {
            max = score3;
        }
        if (score4 > max) {
            max = score4;
        }
        if (score5 > max) {
            max = score5;
        }

        if (score2 < min) {
            min = score2;
        }
        if (score3 < min) {
            min = score3;
        }
        if (score4 < min) {
            min = score4;
        }
        if (score5 < min) {
            min = score5;
        }
    }

    sum = score1 + score2 + score3 + score4 + score5;
    average = sum / (num * 1.0);

    printf("%.2f %.2f %.2f\n", max, min, average);


}
    /** @nc code=end */