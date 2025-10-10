/**
 * @nc app=nowcoder id=1654083e09d2432aa24b151d36309155 topic=290 question=634146 lang=C
 * 2025-10-10 16:42:15
 * https://www.nowcoder.com/practice/1654083e09d2432aa24b151d36309155?tpId=290&tqId=634146
 * [BC90] 小乐乐算多少人被请家长
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int studentNum;
    scanf("%d", &studentNum);
    int score1, score2, score3;
    int count = 0;
    while (scanf("%d %d %d", &score1, &score2, &score3) != EOF) {
        if (score1 + score2 + score3 < 180) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

/** @nc code=end */
