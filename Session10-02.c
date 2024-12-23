// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp nổi bọt (bubble sort) để sắp xếp lại mảng theo thứ tự tăng dần.
#include <stdio.h>

int main(){
    int a[] = {5, 2, 8, 1, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int i, j, temp;
    printf("Mảng ban đầu: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Mảng sau khi sắp xếp: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}