/**
 * @nc app=nowcoder id=2ccc5fca423e47f0b622fe6f151cfab4 topic=290 question=309119 lang=C
 * 2025-10-12 15:59:43
 * https://www.nowcoder.com/practice/2ccc5fca423e47f0b622fe6f151cfab4?tpId=290&tqId=309119
 * [BC112] 空心三角形图案
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int sideLength;
    while (scanf("%hd", &sideLength) != EOF) {
        for (int i = 0; i < sideLength; i++)
        {
            for (int j = 0; j < sideLength; j++)
            {
                if (j == 0 || i == sideLength - 1 || i == j)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}

/** @nc code=end */
