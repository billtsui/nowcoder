/**
 * @nc app=nowcoder id=5b143af8328f4e42adf5e10397ae44ef topic=290 question=310881 lang=C
 * 2025-10-10 23:10:12
 * https://www.nowcoder.com/practice/5b143af8328f4e42adf5e10397ae44ef?tpId=290&tqId=310881
 * [BC97] 回文对称数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int reversed = 0;
    int original = 1;

    for (int i = 1; i <= num; i++) {
        original = i;
        while (original > 0) {
            reversed = reversed * 10 + original % 10;
            original /= 10;
        }

        if (reversed == i) {
            printf("%d\n", i);
        }
        reversed = 0;
    }

    return 0;
}

/** @nc code=end */
