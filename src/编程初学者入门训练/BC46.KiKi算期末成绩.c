/**
 * @nc app=nowcoder id=4ef07b4f80fc4027a4b90e2245f8f637 topic=290 question=828859 lang=C
 * 2025-09-30 13:44:20
 * https://www.nowcoder.com/practice/4ef07b4f80fc4027a4b90e2245f8f637?tpId=290&tqId=828859
 * [BC46] KiKi算期末成绩
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int score1, score2, score3, score4 = 0;
    scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
    float total = score1 * 0.2 + score2 * 0.1 + score3 * 0.2 + score4 * 0.5;
    printf("%.1f\n", total);
    return 0;
}

/** @nc code=end */
