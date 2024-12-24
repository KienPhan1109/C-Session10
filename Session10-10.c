// * Nhập số dòng và số cột mảng 2 chiều (row, col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo. Tiến hành sắp xếp các phần tử trên đường chéo phụ theo thứ tự giảm dần.
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
    int b[row];
    for (int i = 0; i < row; i++) {
        b[i] = a[i][row - 1 - i];
    }
    for (int i = 0; i < row - 1; i++) {
        for (int j = i + 1; j < row; j++) {
            if (b[i] < b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (int i = 0; i < row; i++) {
        a[i][row - 1 - i] = b[i];
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