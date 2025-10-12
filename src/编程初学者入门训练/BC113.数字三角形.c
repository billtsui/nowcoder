/**
 * @nc app=nowcoder id=804a22929b844e6b9379a5e90b5e2197 topic=290 question=309320 lang=C
 * 2025-10-12 16:11:04
 * https://www.nowcoder.com/practice/804a22929b844e6b9379a5e90b5e2197?tpId=290&tqId=309320
 * [BC113] 数字三角形
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int sideLength;
    while (scanf("%d", &sideLength) != EOF) {
        //控制行数
        for (int i = 1; i <= sideLength; i++)
        {
            //打印一行
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
