#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        v.push_back({t, i + 1}); // (タイム, 番号)
    }

    sort(v.begin(), v.end());

    cout << v[0].second << " "
         << v[1].second << " "
         << v[2].second << endl;

    return 0;
}
