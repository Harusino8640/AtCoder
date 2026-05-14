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
    string S;
    cin >> S;

    vector<int> cnt(26, 0);
    // AからZまで26文字分用意する。今回は0-indexとする。

    for (char c : S) {
        cnt[c - 'a']++;
    }
    // 各文字に対して出現回数を数える。0-indexのため1だけズラす。

    int mx = 0;
    for (int i = 0; i < 26; i++) {
        mx = max(mx, cnt[i]);
    }
    // 出現回数の最大値mxを出しておく。

    for (char c : S) {
        if (cnt[c - 'a'] != mx) {
            cout << c;
        }
    }
    cout << endl;
    // その文字の出現回数がmxでなければ出力する。
}
