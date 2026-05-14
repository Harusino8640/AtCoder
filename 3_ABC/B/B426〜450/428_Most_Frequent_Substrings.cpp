#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    map<string, int> cnt;

    // 長さ K の部分文字列を数える
    for (int i = 0; i <= N - K; i++) {
        string t = S.substr(i, K);
        cnt[t]++;
    }

    int mx = 0;

    for (auto [s, c] : cnt) {
        mx = max(mx, c);
    }

    cout << mx << '\n';

    bool first = true;

    for (auto [s, c] : cnt) {
        if (c == mx) {

            if (!first) cout << ' ';

            cout << s;

            first = false;
        }
    }

    cout << '\n';
}
