#include <stdio.h>
#include <string.h>

// H�m ki?m tra c� th? bi?n �?i t? a sang b kh�ng
const char* can_transform(const char a[], const char b[]) {
    // T?o m?t b?n sao c?a x�u a �? tr�nh ?nh h�?ng �?n x�u g?c
    char a_upper[1001];
    strcpy(a_upper, a);

    // Chuy?n t?t c? ch? c�i th�?ng trong a th�nh ch? c�i in hoa
    int n = strlen(a_upper);
    for (int i = 0; i < n; i++) {
        if (a_upper[i] >= 'a' && a_upper[i] <= 'z') {
            a_upper[i] = a_upper[i] - 'a' + 'A';
        }
    }

    // So s�nh x�u �? chuy?n �?i v?i x�u b
    if (strcmp(a_upper, b) == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int Q;
    scanf("%d", &Q);

    // X? l? t?ng c�u h?i
    for (int i = 0; i < Q; i++) {
        char a[1001], b[1001];
        scanf("%s %s", a, b);

        // In k?t qu? cho t?ng c�u h?i
        printf("%s\n", can_transform(a, b));
    }

    return 0;
}

