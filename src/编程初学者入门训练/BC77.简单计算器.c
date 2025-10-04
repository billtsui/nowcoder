/**
 * @nc app=nowcoder id=b8f770674ba7468bb0a0efcc2aa3a239 topic=290 question=307624 lang=C
 * 2025-10-04 16:04:33
 * https://www.nowcoder.com/practice/b8f770674ba7468bb0a0efcc2aa3a239?tpId=290&tqId=307624
 * [BC77] 简单计算器
 * 92.0*22.3
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    double num1, num2 = 0.0000;
    char operator;
    scanf("%lf%c%lf", &num1, &operator, &num2);
    switch (operator) {
    case '+':
        printf("%.4f+%.4f=%.4f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.4f-%.4f=%.4f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.4f*%.4f=%.4f\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0.00) {
            printf("%.4f/%.4f=%.4f\n", num1, num2, num1 / num2);
        } else {
            printf("Wrong!Division by zero!\n");
        }
        break;
    default:
        printf("Invalid operation!\n");
        break;
    }
    return 0;
}

/** @nc code=end */
