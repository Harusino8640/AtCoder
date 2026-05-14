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
    int N, M;
    cin >> N;

    for (int i = 0; i < N; i++) {
      M = N - i;
      cout << M;
      
      if (1 < M) {
        cout << ",";
      }
    }
}
