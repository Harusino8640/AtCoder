#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<vector<int>> A(4, vector<int>(7));
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 6; j++) {
            cin >> A[i][j];
        }
    }
    /*
    イメージは以下の通り。
           0  1  2  3  4  5  6
        0  -  -  -  -  -  -  -
        1  -  1  1  1  1  1  1
        2  -  1  1  1  1  1  1
        3  -  1  1  1  1  1  1
    ただしこの場合、求める確率は0である。
    */

    int success = 0;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                int x = A[1][i];
                int y = A[2][j];
                int z = A[3][k];
                set<int> s = {x, y, z};
                if (s.size() == 3
                /*
                出目が重複した場合は s={4,6} などのようになるため s.size()==3 でなくなる。
                問の条件を満たした時点で確実に真であるため、厳密には無くともよい。
                */
                && s.count(4) && s.count(5) && s.count(6)) {
                /*
                s.count(x)は、s内にxが何個あるか調べるもの。
                上述の通りset<int>sは重複しない構造であるので、今回はまるでbool値であるかのように扱える。
                */
                    success++; //４条件すべてに1が返ってきた場合successを1増やす。
                }
            }
        }
    }

    double answer = (double)success / 216.0;
    cout << answer << '\n';
    return 0;
}
