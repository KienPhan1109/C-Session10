#include <stdio.h>

int main() {
    int a[100]; int n, i, x, count = 0;
    int pos[100];
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Nhập số nguyên cần tìm: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            pos[count] = i + 1;
            count++;
        }
    }
    if (count > 0) {
        printf("Số %d xuất hiện tại các vị trí: ", x);
        for (i = 0; i < count; i++) {
            if (i == count - 1)
            {
                printf("%d", pos[i]);
            }
            else
            {
                printf("%d, ", pos[i]);
            }
        }
        printf("\n");
    } else {
        printf("Số %d không có trong mảng.\n", x);
    }
}