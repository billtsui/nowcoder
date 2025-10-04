/**
 * @nc app=nowcoder id=95712f695f27434b9703394c98b78ee5 topic=290 question=170470 lang=C
 * 2025-10-04 14:00:32
 * https://www.nowcoder.com/practice/95712f695f27434b9703394c98b78ee5?tpId=290&tqId=170470
 * [BC76] ISBN号码
 * 0-670-82162-4
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    char ch;
    int sum = 0;
    int i = 0;
    char chars[13];
    while ((ch = getchar()) != EOF) {
        chars[i++] = ch;
    }
    i = 0;
    for (int j = 0; j < 12; j++) {
        if (chars[j] >= '0' && chars[j] <= '9') {
            sum += (chars[j] - '0') * (i + 1);
            i++;
        }
    }
    // printf("%d\n", sum);

    int check = sum % 11;
    if (check == 10 && chars[12] == 'X') {
        printf("Right\n");
    } else if (check == chars[12] - '0') {
        printf("Right\n");
    } else {
        if (check == 10) {
            chars[12] = 'X';
        } else {
            chars[12] = check + '0';
        }
        for (int j = 0; j < 13; j++) {
            putchar(chars[j]);
        }
        putchar('\n');
    }
    return 0;
}

/** @nc code=end */
