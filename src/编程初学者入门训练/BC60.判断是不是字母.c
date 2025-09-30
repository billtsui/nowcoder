/**
 * @nc app=nowcoder id=91a588dd4cd244bfa616f17603ec123c topic=290 question=307550 lang=C
 * 2025-09-30 14:36:44
 * https://www.nowcoder.com/practice/91a588dd4cd244bfa616f17603ec123c?tpId=290&tqId=307550
 * [BC60] 判断是不是字母
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    char ch;
    while (scanf("%c\n", &ch) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            printf("%c is an alphabet.\n", ch);
        } else {
            printf("%c is not an alphabet.\n", ch);
        }
    }
    return 0;
}

/** @nc code=end */
