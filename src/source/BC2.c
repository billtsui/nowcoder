#include <stdio.h>

int main(int argc, char *argv[]) {
    int row = 6, column = 12;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            if ((i == 1 || i == 2) && (j <= 5 || j >= 8)) {
                printf(" ");
            } else if ((i == 5 || i == 6) && (j != 5 && j != 8)) {
                printf(" ");
            } else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
