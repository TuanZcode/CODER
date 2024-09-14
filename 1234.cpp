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
};

