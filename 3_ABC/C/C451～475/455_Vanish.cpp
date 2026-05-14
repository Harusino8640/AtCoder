#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    int N, K;
    cin >> N >>K;
    ll answer = 0;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        answer += A[i];
    }
    
    ll biggest, bigger;
    for (int i = 1; i <= N; i++) {
        ll current = 0;
        
    }

    cout << answer - biggest - bigger << '\n';
}
