#include <stdio.h>

int main() {
    int n;

    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n], b[n];

    // Nhap các phan tu cua mang a
    printf("Nhap các phan tu cua mang a:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Nhap các phan tu cua mang b
    printf("Nhap các phan tu cua mang b:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    // Kiem tra xem hai mang có giong nhau không
    int is_equal = 1;  // Gia so ban dau mang giong nhau
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            is_equal = 0;  // Neu tìm thay phan tu khác nhau, dat bien is_equal = 0 và thoát vòng l?p
            break;
        }
    }

    // In ket qua
    if (is_equal) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

