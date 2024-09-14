#include <iostream>
using namespace std;

// Hàm v? trái tim tùy ch?nh theo kích thý?c
void veTraiTim(int width) {
    // Chi?u cao c?a trái tim
    int height = width / 2;
    
    // V? ph?n trên c?a trái tim (h?nh cung)
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
    
    // V? ph?n dý?i c?a trái tim (tam giác)
    for (int i = height; i >= 1; i--) {
        for (int j = 0; j < height - i; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // In ch? "T? Yêu C?u" ? gi?a
    cout << "\n     T? Yêu C?u\n" << endl;
}

int main() {
    int width;
    
    // Nh?p kích thý?c chi?u r?ng c?a trái tim
    cout << "Nh?p kích thý?c chi?u r?ng trái tim (s? l? l?n hõn 6): ";
    cin >> width;
    
    if (width < 7 || width % 2 == 0) {
        cout << "Vui l?ng nh?p s? l? l?n hõn 6!" << endl;
    } else {
        veTraiTim(width);
    }
    
    return 0;
}

