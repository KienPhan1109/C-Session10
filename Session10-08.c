#include <stdio.h>

int main() {
    int i, j, k, row, col, temp;
    printf("Nhập vào số hàng: ");
    scanf("%d", &row);
    printf("Nhập vào số cột: ");
    scanf("%d", &col);
    int a[row][col];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Nhập phần tử a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (j = 0; j < col; j++) {
        for (i = 0; i < row - 1; i++) {
            for (k = 0; k < row - i - 1; k++) {
                if (a[k][j] > a[k + 1][j]) {
                    temp = a[k][j];
                    a[k][j] = a[k + 1][j];
                    a[k + 1][j] = temp;
                }
            }
        }
    }
    printf("\nMa trận sau khi được sắp xếp: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}