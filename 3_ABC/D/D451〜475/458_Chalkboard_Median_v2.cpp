#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int X, Q;
    cin >> X >> Q;
    priority_queue<int> L;
    priority_queue<int, vector<int>, greater<int>> R;
    L.push(X);

    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;
        vector<int> add = {A, B};

        for (int x : add) {
            if (x <= L.top()) {
                L.push(x);
            } else {
                R.push(x);
            }

            if (L.size() < R.size() + 1) {
                L.push(R.top());
                R.pop();
            }
            if (L.size() > R.size() + 1) {
                R.push(L.top());
                L.pop();
            }
        }

        cout << L.top() << endl;
    }
}
