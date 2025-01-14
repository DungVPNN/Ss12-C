#include <stdio.h>
#include <stdbool.h>
bool kiemTraSoHoanHao(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int so1, so2;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &so2);
    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }

    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }

    return 0;
}
