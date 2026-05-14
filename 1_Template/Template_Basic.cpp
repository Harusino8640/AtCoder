#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

int main() {
    int N;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    return 0;
}

    /*
    */

int main() {
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'x'){
            count++;
        }

    }
    cout << count << '\n';
}


