#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int i = 0;
    while (i < N && S[i] == 'o') {
    i++;
    }
    
    cout << S.substr(i);
}
