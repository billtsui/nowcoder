/**
 * @nc app=nowcoder id=3f33889582934a09b4e3ddd3cc976226 topic=290 question=352866 lang=C
 * 2025-09-30 14:58:08
 * https://www.nowcoder.com/practice/3f33889582934a09b4e3ddd3cc976226?tpId=290&tqId=352866
 * [BC62] 统计数据正负个数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int posNum = 0;
    int negNum = 0;
    int num;
    while (scanf("%d", &num) != EOF) {
        if (num > 0) {
            posNum++;
        } else if (num < 0) {
            negNum++;
        }
    }
    printf("positive:%d\nnegative:%d\n", posNum, negNum);

    return 0;
}

/** @nc code=end */
