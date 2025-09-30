/**
 * @nc app=nowcoder id=ae6a21920cac4f9184c8ecfcc87f89b9 topic=290 question=634143 lang=C
 * 2025-09-30 14:35:06
 * https://www.nowcoder.com/practice/ae6a21920cac4f9184c8ecfcc87f89b9?tpId=290&tqId=634143
 * [BC59] 小乐乐找最大数
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num1,num2,num3,num4;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    int max = num1;
    if(num2 > max) {
        max = num2;
    }
    if(num3 > max) {
        max = num3;
    }
    if(num4 > max) {
        max = num4;
    }
    printf("%d\n",max);
    return 0;
}

/** @nc code=end */
