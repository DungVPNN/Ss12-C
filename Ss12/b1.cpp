#include <stdio.h>
int tong(int a, int b) {
    return a + b;
}
int main() {
    int a, b, sum;
    printf("Nhap vao so 1: ");
    scanf("%d", &a);
    printf("Nhap vao so 2: ");
    scanf("%d", &b);
    sum = tong(a, b);
    printf("Tong 2 so la: %d\n", sum);
    return 0;
}
