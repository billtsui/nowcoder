/**
 * @nc app=nowcoder id=cbd0c91f821847a4bb1c5115405f6eda topic=385 question=10995371 lang=C
 * 2025-09-26 19:08:21
 * https://www.nowcoder.com/practice/cbd0c91f821847a4bb1c5115405f6eda?tpId=385&tqId=10995371
 * [BGN1] 小红喜欢1
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int num = -1;
    int index = 0;
    while (scanf("%d", &num) != EOF)
    {
        index++;
        if(num == 1){
            printf("%d\n",index);
        }
    }
    
    return 0;
}

/** @nc code=end */
