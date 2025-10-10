/**
 * @nc app=nowcoder id=dc943274e8254a9eb074298fb2084703 topic=290 question=105636 lang=C
 * 2025-10-10 16:57:45
 * https://www.nowcoder.com/practice/dc943274e8254a9eb074298fb2084703?tpId=290&tqId=105636
 * [BC91] 水仙花数
 */

/** @nc code=start */

#include <stdio.h>

int main() {

    int start, end = 0;
    while (scanf("%d %d\n", &start, &end) != EOF) {
        int hasPrinted = 0;
        for (int i = start; i <= end; i++) {
            int bai = i / 100;
            int shi = (i / 10) % 10;
            int ge = i % 10;
            if (i == bai * bai * bai + shi * shi * shi + ge * ge * ge) {
                printf("%d ", i);
                hasPrinted = 1;
            }
        }
        if(hasPrinted == 0) {
            printf("no");
        }
        printf("\n");
    }

    return 0;
}

/** @nc code=end */
