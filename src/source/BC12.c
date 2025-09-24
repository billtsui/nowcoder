/*
 * 这题测试用例有点意思。IEEE754保存小数的时候，例如0.845实际上是近似保存为0.8449999999999。保留2位小数在做四舍五入的时候会变成0.84
 */
#include <math.h>
#include <stdio.h>

int main(void) {
    int studentNo = 0;
    double score1, score2, score3 = 0.0;
    scanf("%d;%lf,%lf,%lf", &studentNo, &score1, &score2, &score3);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", studentNo, round(score1 * 100) / 100,
           round(score2 * 100) / 100, round(score3 * 100) / 100);
    return 0;
}
