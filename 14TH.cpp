#include <stdio.h>
#include <string.h>

#define SO_LUONG_MAX 14
#define KICH_THUOC_TEN 50

// H�m d? th�m v? kh�ch th? 14 v�o b�n ti?c
int addLouisXIV(char guests[][KICH_THUOC_TEN], int numGuests) {
    // T�m v? tr� d? ch�n "Louis XIV" v�o
    int position = 0;
    while (position < numGuests && strcmp(guests[position], "Louis XIV") < 0) {
        position++;
    }

    // D?i c�c kh�ch t? v? tr� ch�n d?n cu?i d? t?o ch? cho "Louis XIV"
    for (int i = numGuests; i > position; i--) {
        strcpy(guests[i], guests[i - 1]);
    }

    // Th�m "Louis XIV" v�o v? tr� d� t�m du?c
    strcpy(guests[position], "Louis XIV");

    // Tang s? lu?ng kh�ch l�n 1 v� tr? v? gi� tr? m?i c?a numGuests
    return numGuests + 1;
}

int main() {
    char guests[SO_LUONG_MAX][KICH_THUOC_TEN];  // M?ng luu t�n c�c v? kh�ch
    int numGuests = 0;                          // S? lu?ng v? kh�ch ban d?u

    // Nh?p t�n c?a c�c v? kh�ch
    for (int i = 0; i < SO_LUONG_MAX - 1; i++) {
        printf("Nhap ten cua vi khach thu %d: ", i + 1);
        fgets(guests[i], sizeof(guests[i]), stdin);
        guests[i][strcspn(guests[i], "\n")] = '\0';  // Lo?i b? k� t? newline n?u c�
        numGuests++;
    }

    // Th�m "Louis XIV" v�o b�n ti?c v� c?p nh?t numGuests
    numGuests = addLouisXIV(guests, numGuests);

    // In danh s�ch v? kh�ch sau khi th�m "Louis XIV"
    printf("Danh sach vi khach sau khi them Louis XIV:\n");
    for (int i = 0; i < numGuests; i++) {
        printf("%s\n", guests[i]);
    }

    return 0;
}

