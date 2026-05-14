#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int answer = 29;
    for (int x : A) {
        int count = 0;
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }
        answer = min(answer, count);
    }

    cout << answer << endl;
    return 0;
}
