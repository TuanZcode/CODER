#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Hàm ki?m tra xem có th? bi?n ð?i t? xâu a sang xâu b không
int can_transform(char a[], char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    int index_a = 0;
    int index_b = 0;

    while (index_a < len_a && index_b < len_b) {
        // N?u k? t? hi?n t?i c?a a là ch? cái thý?ng, chuy?n thành ch? cái in hoa
        if (islower(a[index_a])) {
            a[index_a] = toupper(a[index_a]);
        }

        // Ki?m tra xem k? t? c?a a có kh?p v?i k? t? c?a b không
        if (a[index_a] == b[index_b]) {
            index_a++;
            index_b++;
        } else {
            index_a++;
        }
    }

    // Ki?m tra xem ð? duy?t h?t xâu b và có chýa có k? t? thý?ng nào trong a không
    return (index_b == len_b) && (strpbrk(a, "abcdefghijklmnopqrstuvwxyz") == NULL);
}

int main() {
    int Q;
    scanf("%d", &Q);

    // X? l? t?ng câu h?i
    for (int i = 0; i < Q; i++) {
        char a[1001];
        char b[1001];

        // Ð?c xâu a
        scanf("%s", a);

        // Ð?c xâu b
        scanf("%s", b);

        // Ki?m tra và in k?t qu?
        if (can_transform(a, b)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}



