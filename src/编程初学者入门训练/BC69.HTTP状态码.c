/**
 * @nc app=nowcoder id=99dba043761e43c2a6f931e2c5c247c7 topic=290 question=309319 lang=C
 * 2025-10-04 10:42:54
 * https://www.nowcoder.com/practice/99dba043761e43c2a6f931e2c5c247c7?tpId=290&tqId=309319
 * [BC69] HTTP状态码
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int statusCode = 0;
    while (scanf("%d", &statusCode) != EOF) {
        switch (statusCode) {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;
        default:
            printf("Unknown Status Code\n");
            break;
        }
    }
    return 0;
}

/** @nc code=end */
