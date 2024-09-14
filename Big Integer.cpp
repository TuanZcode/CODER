#include <stdio.h>

// Ð?nh nghia c?u trúc BigInteger
struct BigInteger {
    int sign;  // D?u c?a s? nguyên: 0 là âm, 1 là duong
    int number[100];  // M?ng d? luu tr? giá tr? s? nguyên
};

// Hàm tính t?ng c?a hai s? nguyên
struct BigInteger sum(struct BigInteger first, struct BigInteger second) {
    struct BigInteger result;
    int carry = 0;

    // Kh?i t?o k?t qu? v?i giá tr? ban d?u là 0 và duong
    result.sign = 1;
    for (int i = 0; i < 100; ++i) {
        result.number[i] = 0;
    }

    // Duy?t qua t?ng ch? s? và th?c hi?n phép c?ng
    for (int i = 0; i < 100; ++i) {
        int sum = first.number[i] + second.number[i] + carry;
        result.number[i] = sum % 10;
        carry = sum / 10;
    }

    // Xác d?nh d?u c?a k?t qu?
    result.sign = (first.sign == second.sign) ? first.sign : result.sign;

    return result;
}

int main() {
    // Test hàm sum
    struct BigInteger a, b;

    printf("Nhap so thu nhat (dau so chuoi): ");
    scanf("%d", &a.sign);
    printf("Nhap so thu nhat (chuoi so): ");
    for (int i = 0; i < 100; ++i) {
        scanf("%1d", &a.number[i]);
    }

    printf("Nhap so thu hai (dau so chuoi): ");
    scanf("%d", &b.sign);
    printf("Nhap so thu hai (chuoi so): ");
    for (int i = 0; i < 100; ++i) {
        scanf("%1d", &b.number[i]);
    }

    struct BigInteger c = sum(a, b);

    // Hi?n th? k?t qu?
    printf("Tong: ");
    if (c.sign == 0) {
        printf("-");
    }

    int startPrint = 99;
    while (c.number[startPrint] == 0 && startPrint > 0) {
        startPrint--;
    }

    for (int i = startPrint; i >= 0; --i) {
        printf("%d", c.number[i]);
    }

    return 0;
}

