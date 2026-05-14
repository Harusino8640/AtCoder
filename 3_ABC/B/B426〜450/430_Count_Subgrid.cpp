#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    set<string> st;

    for (int si = 0; si <= N - M; si++) {
        for (int sj = 0; sj <= N - M; sj++) {

            string t;

            for (int i = 0; i < M; i++) {
                for (int j = 0; j < M; j++) {
                    t += S[si + i][sj + j];
                }
            }

            st.insert(t);
        }
    }

    cout << st.size() << '\n';
}
