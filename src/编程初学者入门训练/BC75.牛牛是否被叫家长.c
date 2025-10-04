/**
 * @nc app=nowcoder id=cc896ffd90d34c7faa318b04e87adf11 topic=290 question=634144 lang=C
 * 2025-10-04 13:57:06
 * https://www.nowcoder.com/practice/cc896ffd90d34c7faa318b04e87adf11?tpId=290&tqId=634144
 * [BC75] 牛牛是否被叫家长
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int score1, score2, score3;
    scanf("%d %d %d", &score1, &score2, &score3);
    if (score1 < 60 && score2 < 60 && score3 < 60) {
        printf("YES\n");
        return 0;
    }

    float average = (score1 + score2 + score3) / 3.0;
    if (average < 60) {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
/** @nc code=end */
