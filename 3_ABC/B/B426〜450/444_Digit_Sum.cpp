#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    int m = 0;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        m = max(m, (int)S[i].size());
    }

    for (int i = 0; i < N; i++) {
        int len = S[i].size();
        int k = (m - len) / 2;
        string dots(k, '.');
        cout << dots << S[i] << dots << endl;
    }
}
