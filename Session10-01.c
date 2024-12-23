// * Khởi tạo và gán giá trị cho mảng bất kỳ, yêu cầu người dùng nhập vào phần tử bất kỳ và kiểm tra xem phần tử có tồn tại trong mảng không, in ra vị trí của phần tử đó.
#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 10, 6, 7, 8, 9, 10};
    int n, pos = -1;
    printf("Nhap so can tim: ");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++){
        if(arr[i] == n){
            pos = i + 1;
            break;
        }
    }
    if(pos == -1){
        printf("So %d khong ton tai trong mang.\n", n);
    }
    else{
        printf("So %d co o vi tri %d trong mang.\n", n, pos);
    }
    return 0;
    system("pause");
}