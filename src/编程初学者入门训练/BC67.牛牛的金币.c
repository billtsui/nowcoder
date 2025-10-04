/**
 * @nc app=nowcoder id=35d8e3e569dc49f2a1018d1dc9186998 topic=290 question=2368477 lang=C
 * 2025-10-04 10:32:27
 * https://www.nowcoder.com/practice/35d8e3e569dc49f2a1018d1dc9186998?tpId=290&tqId=2368477
 * [BC67] 牛牛的金币
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int x, x1, y, y1;
    scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
    if(y1 < y) {
        printf("%s\n","d");
        goto done_label;
    }

    if(y1 > y) {
        printf("%s\n","u");
        goto done_label;
    }

    if(x1 < x) {
        printf("%s\n","l");
        goto done_label;
    }

    if(x1 > x) {
        printf("%s\n","r");
        goto done_label;
    }
done_label:
    return 0;
}

/** @nc code=end */
