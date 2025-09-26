/**
 * @nc app=nowcoder id=4e089ee8966a4ed4b306f64e68d45264 topic=290 question=292286 lang=C
 * 2025-09-26 17:08:28
 * https://www.nowcoder.com/practice/4e089ee8966a4ed4b306f64e68d45264?tpId=290&tqId=292286
 * [BC15] 大小写转换
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    char ch;
    while (scanf("%c", &ch) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("%c\n", ch - 'A' + 'a');
        }
    }

    return 0;
}

/** @nc code=end */
