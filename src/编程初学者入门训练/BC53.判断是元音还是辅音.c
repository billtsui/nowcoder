/**
 * @nc app=nowcoder id=7eb4df4d52c44d309081509cf52ecbc4 topic=290 question=307549 lang=C
 * 2025-09-30 14:07:54
 * https://www.nowcoder.com/practice/7eb4df4d52c44d309081509cf52ecbc4?tpId=290&tqId=307549
 * [BC53] 判断是元音还是辅音
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    char ch;
    while (scanf(" %c", &ch) != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%s\n", "Vowel");
        } else {
            printf("%s\n", "Consonant");
        }
    }
    return 0;
}

/** @nc code=end */
