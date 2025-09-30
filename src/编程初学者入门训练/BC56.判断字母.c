/**
 * @nc app=nowcoder id=44d2d63103664913bc243d3836b4f341 topic=290 question=295416 lang=C
 * 2025-09-30 14:13:18
 * https://www.nowcoder.com/practice/44d2d63103664913bc243d3836b4f341?tpId=290&tqId=295416
 * [BC56] 判断字母
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

/** @nc code=end */
