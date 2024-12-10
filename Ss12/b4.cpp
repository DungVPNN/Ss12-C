#include <stdio.h>
int timMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    int arr[100];
    int max;
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i );
        scanf("%d", &arr[i]);
    }
    max = timMax(arr, n);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

