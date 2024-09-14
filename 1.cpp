#include <iostream>
#include <vector>

using namespace std;

class QuickFindUF {
private:
    vector<int> id;

public:
    QuickFindUF(int N) {
        id.resize(N);
        for (int i = 0; i < N; i++) {
            id[i] = i;
        }
    }

    bool connected(int p, int q) {
        return id[p] == id[q];
    }

    void union_op(int p, int q) {
        int pid = id[p];
        int qid = id[q];
        for (int i = 0; i < id.size(); i++) {
            if (id[i] == pid) {
                id[i] = qid;
            }
        }
    }

    void print_id() {
        for (int i = 0; i < id.size(); i++) {
            cout << id[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int N, queries;
    cout << "Nh?p s? l�?ng ph?n t?: ";
    cin >> N;
    
    QuickFindUF uf(N);

    // In ra m?ng ban �?u
    cout << "M?ng ban �?u: ";
    uf.print_id();
    
    cout << "Nh?p s? l�?ng truy v?n: ";
    cin >> queries;

    for (int i = 0; i < queries; i++) {
        int type, p, q;
        cout << "Nh?p 1 �? ki?m tra connected, 2 �? h?p nh?t union (p q): ";
        cin >> type >> p >> q;
        
        if (type == 1) {
            if (uf.connected(p, q)) {
                cout << p << " v� " << q << " c�ng trong m?t th�nh ph?n\n";
            } else {
                cout << p << " v� " << q << " kh�ng c�ng th�nh ph?n\n";
            }
        } else if (type == 2) {
            uf.union_op(p, q);
            cout << "�? h?p nh?t " << p << " v� " << q << endl;
            uf.print_id();  // In ra m?ng sau m?i l?n union
        }
    }

    return 0;
}

