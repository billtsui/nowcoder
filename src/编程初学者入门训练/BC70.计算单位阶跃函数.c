/**
 * @nc app=nowcoder id=0b23793ae48a4e6cb7dfff042c959a04 topic=290 question=307619 lang=C
 * 2025-10-04 10:46:32
 * https://www.nowcoder.com/practice/0b23793ae48a4e6cb7dfff042c959a04?tpId=290&tqId=307619
 * [BC70] 计算单位阶跃函数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int value = 0;
    while (scanf("%d", &value) != EOF) {
        if (value > 0) {
            printf("1\n");
        } else if (value == 0) {
            printf("0.5\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}

/** @nc code=end */
