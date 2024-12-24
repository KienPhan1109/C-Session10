// * Nhập số dòng và số cột mảng 2 chiều (row,col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo. Tiến hành sắp xếp các phần tử trên đường chéo chính theo thứ tự tăng dần.
#include <stdio.h>

int main() {
    int row, col;
    printf("Nhập số hàng: ");
    scanf("%d", &row);
    printf("Nhập số cột: ");
    scanf("%d", &col);
    int a[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Phần tử [%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    int minSize = (row < col) ? row : col;
    for (int i = 0; i < minSize - 1; i++) {
        for (int j = i + 1; j < minSize; j++) {
            if (a[i][i] > a[j][j]) {
                int temp = a[i][i];
                a[i][i] = a[j][j];
                a[j][j] = temp;
            }
        }
    }
    printf("Mảng sau khi được sắp xếp: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}