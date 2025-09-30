/**
 * @nc app=nowcoder id=56513524333148b38945e1989bc7df4e topic=290 question=307546 lang=C
 * 2025-09-30 14:05:40
 * https://www.nowcoder.com/practice/56513524333148b38945e1989bc7df4e?tpId=290&tqId=307546
 * [BC51] 及格分数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int score;
    while (scanf("%d", &score) != EOF) {
        if (score >= 60) {
            printf("%s\n", "Pass");
        } else {
            printf("%s\n", "Fail");
        }
    }
    return 0;
}

/** @nc code=end */
