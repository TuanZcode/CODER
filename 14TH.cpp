#include <stdio.h>
#include <string.h>

#define SO_LUONG_MAX 14
#define KICH_THUOC_TEN 50

// Hàm d? thêm v? khách th? 14 vào bàn ti?c
int addLouisXIV(char guests[][KICH_THUOC_TEN], int numGuests) {
    // Tìm v? trí d? chèn "Louis XIV" vào
    int position = 0;
    while (position < numGuests && strcmp(guests[position], "Louis XIV") < 0) {
        position++;
    }

    // D?i các khách t? v? trí chèn d?n cu?i d? t?o ch? cho "Louis XIV"
    for (int i = numGuests; i > position; i--) {
        strcpy(guests[i], guests[i - 1]);
    }

    // Thêm "Louis XIV" vào v? trí dã tìm du?c
    strcpy(guests[position], "Louis XIV");

    // Tang s? lu?ng khách lên 1 và tr? v? giá tr? m?i c?a numGuests
    return numGuests + 1;
}

int main() {
    char guests[SO_LUONG_MAX][KICH_THUOC_TEN];  // M?ng luu tên các v? khách
    int numGuests = 0;                          // S? lu?ng v? khách ban d?u

    // Nh?p tên c?a các v? khách
    for (int i = 0; i < SO_LUONG_MAX - 1; i++) {
        printf("Nhap ten cua vi khach thu %d: ", i + 1);
        fgets(guests[i], sizeof(guests[i]), stdin);
        guests[i][strcspn(guests[i], "\n")] = '\0';  // Lo?i b? kí t? newline n?u có
        numGuests++;
    }

    // Thêm "Louis XIV" vào bàn ti?c và c?p nh?t numGuests
    numGuests = addLouisXIV(guests, numGuests);

    // In danh sách v? khách sau khi thêm "Louis XIV"
    printf("Danh sach vi khach sau khi them Louis XIV:\n");
    for (int i = 0; i < numGuests; i++) {
        printf("%s\n", guests[i]);
    }

    return 0;
}

