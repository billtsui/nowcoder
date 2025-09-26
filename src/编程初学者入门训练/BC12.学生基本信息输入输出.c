/**
 * @nc app=nowcoder id=58b6a69b4bf943b49d2cd3c15770b9fd topic=290 question=274662 lang=C
 * 2025-09-26 16:42:32
 * https://www.nowcoder.com/practice/58b6a69b4bf943b49d2cd3c15770b9fd?tpId=290&tqId=274662
 * [BC12] 学生基本信息输入输出
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int studentNo = 0;
    double score1, score2, score3 = 0.0;
    scanf("%d;%lf,%lf,%lf", &studentNo, &score1, &score2, &score3);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", studentNo, round(score1 * 100) / 100,
           round(score2 * 100) / 100, round(score3 * 100) / 100);
    return 0;
}

/** @nc code=end */
