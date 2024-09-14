#include <iostream>
using namespace std;

// H�m v? tr�i tim t�y ch?nh theo k�ch th�?c
void veTraiTim(int width) {
    // Chi?u cao c?a tr�i tim
    int height = width / 2;
    
    // V? ph?n tr�n c?a tr�i tim (h?nh cung)
    for (int i = height / 2; i <= height; i += 2) {
        for (int j = 1; j < width - i; j += 2) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 1; j <= width - i; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // V? ph?n d�?i c?a tr�i tim (tam gi�c)
    for (int i = height; i >= 1; i--) {
        for (int j = 0; j < height - i; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // In ch? "T? Y�u C?u" ? gi?a
    cout << "\n     T? Y�u C?u\n" << endl;
}

int main() {
    int width;
    
    // Nh?p k�ch th�?c chi?u r?ng c?a tr�i tim
    cout << "Nh?p k�ch th�?c chi?u r?ng tr�i tim (s? l? l?n h�n 6): ";
    cin >> width;
    
    if (width < 7 || width % 2 == 0) {
        cout << "Vui l?ng nh?p s? l? l?n h�n 6!" << endl;
    } else {
        veTraiTim(width);
    }
    
    return 0;
}

