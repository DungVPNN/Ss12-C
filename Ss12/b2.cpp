#include <stdio.h>

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    int arr[100];
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i );
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu trong mang la: ");
    inMang(arr, n);
    return 0;
}
