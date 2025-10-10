/**
 * @nc app=nowcoder id=8f71f5670e6a45118d24d13868a2da9e topic=290 question=169881 lang=C
 * 2025-10-10 18:46:15
 * https://www.nowcoder.com/practice/8f71f5670e6a45118d24d13868a2da9e?tpId=290&tqId=169881
 * [BC96] 金币
 * 洗澡的时候想了一下，用多变量控制会更清晰一些
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    short day = 0;
    scanf("%d", &day);

    int gold = 0;         // 金币数量
    short step = 1;       // 步进
    short shift = 0;      // 金币档位是否增加1个
    short accumulate = 0; // 当前档位已经发了几天

    for (int i = 1; i <= day; i++) {
        /*
         * 2、
         * 如果shift=1，说明当前档位发满了，需要把步进step+1，shift置0，accumulate置0
         */
        if (shift == 1) {
            step++;
            shift = 0;
            accumulate = 0;
        }

        /*
         *1、
         * 先写这里的代码，金币默认增加当前step个
         * 再把当前档位发了几天+1
         * 最后判断当前档位发了几天。如果步进step等于accumulate，说明当前档位发满了，需要把shift置1
         */
        gold += step;
        if (shift == 0 && step == ++accumulate) {
            shift = 1;
        }
    }
    printf("%d\n", gold);
    return 0;
}

/** @nc code=end */
