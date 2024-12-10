#include <stdio.h>
int tinhgiaithua(int n) {
    int giaithua = 1;
    for (int i = 1; i <= n; i++) {
        giaithua *= i;
    }
    return giaithua;
}
int main() {
    int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    int ketqua = tinhgiaithua(n);
    printf("Giai thua cua %d la: %d\n", n, ketqua);
    return 0;
}
