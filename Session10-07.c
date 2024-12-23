// * Nhập số dòng và số cột mảng 2 chiều (n, m), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo. Tiến hành sắp xếp các phần tử trong mảng tăng dần theo từng dòng và in dưới dạng ma trận sau khi sắp xếp.
#include <stdio.h>

int main(){
    int i, j, col, row, temp;
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
    for (i = 0; i < row; i++) {
        for (j = 0; j < col - 1; j++) {
            for (int k = 0; k < col - j - 1; k++)
            if (a[i][k] > a[i][k + 1]) {
                temp = a[i][k];
                a[i][k] = a[i][k + 1];
                a[i][k + 1] = temp;
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
}
