#include <stdio.h>
#include <stdbool.h>
//#incldue <math.h>
bool kiemTraNguyenTo(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
        return false;
   		 }
	}
    return true;
}
int main() {
    int so1, so2;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &so2);
    if (kiemTraNguyenTo(so1)) {
        printf("%d la so nguyen to.\n", so1);
    } else {
        printf("%d khong phai la so nguyen to.\n", so1);
    }

    if (kiemTraNguyenTo(so2)) {
        printf("%d la so nguyen to.\n", so2);
    } else {
        printf("%d khong phai la so nguyen to.\n", so2);
    }

    return 0;
}
