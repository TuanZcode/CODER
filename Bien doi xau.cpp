#include <stdio.h>
#include <string.h>

// Hàm ki?m tra có th? bi?n ð?i t? a sang b không
const char* can_transform(const char a[], const char b[]) {
    // T?o m?t b?n sao c?a xâu a ð? tránh ?nh hý?ng ð?n xâu g?c
    char a_upper[1001];
    strcpy(a_upper, a);

    // Chuy?n t?t c? ch? cái thý?ng trong a thành ch? cái in hoa
    int n = strlen(a_upper);
    for (int i = 0; i < n; i++) {
        if (a_upper[i] >= 'a' && a_upper[i] <= 'z') {
            a_upper[i] = a_upper[i] - 'a' + 'A';
        }
    }

    // So sánh xâu ð? chuy?n ð?i v?i xâu b
    if (strcmp(a_upper, b) == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int Q;
    scanf("%d", &Q);

    // X? l? t?ng câu h?i
    for (int i = 0; i < Q; i++) {
        char a[1001], b[1001];
        scanf("%s %s", a, b);

        // In k?t qu? cho t?ng câu h?i
        printf("%s\n", can_transform(a, b));
    }

    return 0;
}

