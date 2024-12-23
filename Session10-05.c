#include <stdio.h>

int main(){
    int i, j, temp, search;
    int a[5] = { 9, 15, 23, 42, 1 };
    int length = sizeof(a) / sizeof(a[0]);
    printf("Mảng trước khi sắp xếp: \n");
    for ( i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n");
    printf("\nMảng sau khi được sắp xếp: \n");
    for (i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("\nNhập vào phần tử cần tìm kiếm: ");
    scanf("%d", &search);
    int left = 0, right = length - 1, kiemtra = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == search) {
            printf("\nPhần tử %d được tìm thấy ở vị trí: %d.", search, mid + 1);
            kiemtra = 1;
            break;
        }
        else if (a[mid] < search)
        {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    if (!kiemtra)
    {
        printf("Phần tử %d không được tìm thấy trong mảng.", search);
    }
    printf("\n");
}