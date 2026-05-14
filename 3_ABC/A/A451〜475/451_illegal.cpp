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
    string S;
    cin >> S;
    bool A = true;
    for (int i = 0; i < 20; i++) {
      if (S.size() == 5 * i) {
       A = false;
      }
    }
    if (A == false) {
      cout << "Yes" <<endl;
    }
    else {
      cout << "No" << endl;
    }
}
