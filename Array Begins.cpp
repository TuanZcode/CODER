#include <stdio.h>

int main() {
    int n;

    // Nh?p s? lu?ng ph?n t? c?a m?ng
    printf("Nhap so luong phan tu cua mang (n <= 20): ");
    scanf("%d", &n);

    if (n <= 20) {
        // Khai báo m?ng có n ph?n t?
        int arr[n];

        // Nh?p giá tr? cho t?ng ph?n t? c?a m?ng
        printf("Nhap gia tri cho cac phan tu cua mang:\n");
        for (int i = 0; i < n; i++) {
            printf("arr[%d] = ", i);
            scanf("%d", &arr[i]);
        }

        // In giá tr? c?a m?ng ra màn hình
        printf("Cac gia tri cua mang la:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Nhap so luong phan tu n khong hop le. (n <= 20)\n");
    }

    return 0;
}

