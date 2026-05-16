#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int X, Q;
    cin >> X >> Q;

    vector<int> A;
    A.push_back(X);

    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;

        A.push_back(a);
        A.push_back(b);

        sort(A.begin(), A.end());

        int n = A.size();

        cout << A[n / 2] << endl;
    }

    return 0;
}
