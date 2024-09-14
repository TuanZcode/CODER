#include <iostream>
using namespace std; 
int main() {
    int a, b;
    cin >> a >> b;

    if (b % a == 0) {
        cout << b;
    }

    int c = b % a;
    cout << b - c; 

    return 0;
}
