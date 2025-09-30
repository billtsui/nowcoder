/**
 * @nc app=nowcoder id=fcd30aac9c4f4028b23919a0c649824d topic=290 question=632017 lang=C
 * 2025-09-28 11:45:49
 * https://www.nowcoder.com/practice/fcd30aac9c4f4028b23919a0c649824d?tpId=290&tqId=632017
 * [BC45] 小乐乐改数字
 */

/** @nc code=start */

#include <math.h>
#include <stdio.h>
#define ARRAY_SIZE 8

int main() {
    int inputNum;
    int moduloNum = 10;
    int result = 0;
    scanf("%d", &inputNum);

    int nums[ARRAY_SIZE] = {};
    for (int i = 0; i < ARRAY_SIZE; i++) {
        nums[i] = 0;
    }

    int index = 0;
    while ((inputNum > 0) && (inputNum % moduloNum >= 0)) {
        int num = inputNum % moduloNum / (moduloNum / 10);

        nums[index++] = (num % 2 == 0 ? 0 : 1);
        inputNum -= num * (moduloNum / 10);
        moduloNum *= 10;
    }

    for (int k = 0; k < ARRAY_SIZE; k++) {
        result += nums[k] * (int)pow(10, k);
    }

    printf("%d\n", result);
    return 0;
}

/** @nc code=end */
