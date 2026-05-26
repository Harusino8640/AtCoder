#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> stored(n + 1, 0); // 「これまでに積まれた総ブロック数」を持っておく。
    vector<int> freq(q + 2, 0); // 「現在q個以上ブロックがある列の数」も作っておく。
    freq[0] = n; // 最初はn列全てが0個なので、freq[0]にn列分を突っ込んでおく。
    int base = 0; //「消えた行の数」を持つことで、現在のi列目のブロック数は stored[i] - base と表せる。

    for (int i = 0; i < q; i++) {
        int type, m;
        cin >> type >> m;

        if (type == 1) {
            freq[stored[m]]--;
            stored[m]++;
            freq[stored[m]]++;

            if (freq[base] == 0) {
                base++; //「現在base個以上ブロックがある列の数」が0列の場合、テトリスする（baseを1増やす）。
            }
        }

        else {
            int ans = 0;
            for (int j = base + m; j <= q; j++) {
                ans += freq[j];
            }
            /*
            stored[j] >= base + m であるようなものを全てカウントしたい。
            freq[j] で帰ってくる値が、まさにその数である。
            よってこれを base + m <= j <= q の範囲で調べればよい。
            */
            cout << ans << '\n';
        }
    }
}
