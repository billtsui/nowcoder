/**
 * @nc app=nowcoder id=a8b018667e274af29b5f76a6673450fc topic=290 question=307547 lang=C
 * 2025-09-30 14:07:00
 * https://www.nowcoder.com/practice/a8b018667e274af29b5f76a6673450fc?tpId=290&tqId=307547
 * [BC52] 判断整数奇偶性
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        if (num % 2 == 0) {
            printf("%s\n", "Even");
        } else {
            printf("%s\n", "Odd");
        }
    }
    return 0;
}

/** @nc code=end */
