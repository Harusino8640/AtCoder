#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    // 使用可能な文字を記録
    bool inS[26] = {};
    bool inT[26] = {};

    for (char c : S) inS[c - 'a'] = true;
    for (char c : T) inT[c - 'a'] = true;

    int Q;
    cin >> Q;

    while (Q--) {
        string w;
        cin >> w;

        bool okS = true;
        bool okT = true;

        for (char c : w) {
            if (!inS[c - 'a']) okS = false;
            if (!inT[c - 'a']) okT = false;
        }

        if (okS && !okT) {
            cout << "Takahashi\n";
        } else if (!okS && okT) {
            cout << "Aoki\n";
        } else {
            cout << "Unknown\n";
        }
    }

    return 0;
}
