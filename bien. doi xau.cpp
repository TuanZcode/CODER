#include <stdio.h>
#include <ctype.h>
#include <string.h>

// H�m ki?m tra xem c� th? bi?n �?i t? x�u a sang x�u b kh�ng
int can_transform(char a[], char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    int index_a = 0;
    int index_b = 0;

    while (index_a < len_a && index_b < len_b) {
        // N?u k? t? hi?n t?i c?a a l� ch? c�i th�?ng, chuy?n th�nh ch? c�i in hoa
        if (islower(a[index_a])) {
            a[index_a] = toupper(a[index_a]);
        }

        // Ki?m tra xem k? t? c?a a c� kh?p v?i k? t? c?a b kh�ng
        if (a[index_a] == b[index_b]) {
            index_a++;
            index_b++;
        } else {
            index_a++;
        }
    }

    // Ki?m tra xem �? duy?t h?t x�u b v� c� ch�a c� k? t? th�?ng n�o trong a kh�ng
    return (index_b == len_b) && (strpbrk(a, "abcdefghijklmnopqrstuvwxyz") == NULL);
}

int main() {
    int Q;
    scanf("%d", &Q);

    // X? l? t?ng c�u h?i
    for (int i = 0; i < Q; i++) {
        char a[1001];
        char b[1001];

        // �?c x�u a
        scanf("%s", a);

        // �?c x�u b
        scanf("%s", b);

        // Ki?m tra v� in k?t qu?
        if (can_transform(a, b)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}



