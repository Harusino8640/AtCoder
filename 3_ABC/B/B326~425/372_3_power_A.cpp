#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M;
    cin >> M;

    vector<int> A;

    int power = 0;

    while (M > 0) {
        int d = M % 3;

        for (int i = 0; i < d; i++) {
            A.push_back(power);
        }

        M /= 3;
        power++;
    }

    cout << A.size() << endl;
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
