/**
 * @nc app=nowcoder id=f3a134908d5b41869f14f58307008a97 topic=290 question=309321 lang=C
 * 2025-10-10 17:35:47
 * https://www.nowcoder.com/practice/f3a134908d5b41869f14f58307008a97?tpId=290&tqId=309321
 * [BC93] 公务员面试
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int score[7] = {0};
    while (scanf("%d %d %d %d %d %d %d\n", &score[0], &score[1], &score[2], &score[3], &score[4], &score[5],
                 &score[6]) != EOF) {
        int total = 0;
        int max = score[0];
        int min = score[0];
        for (int i = 0; i < 7; i++) {
            total += score[i];
            if (score[i] > max) {
                max = score[i];
            }
            if (score[i] < min) {
                min = score[i];
            }
        }
        total = total - max - min;
        printf("%.2f\n", total / 5.0);
    }

    return 0;
}

/** @nc code=end */
