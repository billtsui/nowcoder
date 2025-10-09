/**
 * @nc app=nowcoder id=5e85cc26475449648e668aa98e92d05b topic=290 question=311032 lang=C
 * 2025-10-09 11:53:13
 * https://www.nowcoder.com/practice/5e85cc26475449648e668aa98e92d05b?tpId=290&tqId=311032
 * [BC87] 数位之和
 */

/** @nc code=start */

#include <math.h>
#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    scanf("%d", &num);

    if (num < 0) {
        num = -1 * num;
    }

    int reminder = 0;
    int exponent = 0;
    int result = 0;
    do {
        // printf("num=%d re=%d ex=%d sum=%d resu=%d\n", num, reminder, exponent, sum, result);
        reminder = num % (int)pow(10, exponent + 1);
        result = reminder / (int)pow(10, exponent);
        sum += result;
        num = num - reminder;
        exponent++;
    } while (num != reminder);

    printf("%d", sum);
    return 0;
}

/** @nc code=end */
