#include <iostream>
#include <string>
using namespace std;

int main() {
    int W, B;
    cin >> W >> B;

    string base = "wbwbwwbwbwbw";
    string S = "";

    // 十分長くする
    for (int i = 0; i < 30; i++) S += base;

    int N = S.size();

    for (int l = 0; l < N; l++) {
        int w = 0, b = 0;

        for (int r = l; r < N; r++) {
            if (S[r] == 'w') w++;
            else b++;

            if (w == W && b == B) {
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";
    return 0;
}
