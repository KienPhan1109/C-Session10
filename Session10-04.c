//Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp chọn (selection sort) để sắp xếp lại mảng theo thứ tự tăng dần.
#include <stdio.h>

int main(){
    int a[] = {5, 2, 8, 1, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int i, j, temp, min;
    printf("Mảng ban đầu: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    printf("Mảng sau khi sắp xếp: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}