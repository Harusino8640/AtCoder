#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int T, X;
    cin >> T >> X;

    vector<int> A(T + 1);

    for (int i = 0; i <= T; i++) {
        cin >> A[i];
    }

    int last = A[0];

    cout << 0 << " " << A[0] << endl;

    for (int i = 1; i <= T; i++) {
        if (abs(A[i] - last) >= X) {
            cout << i << " " << A[i] << endl;
            last = A[i];
        }
    }
}
