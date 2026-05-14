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
  int X, Y, Z;
  cin >> X >> Y >> Z;

  for (int i = 0; i < 99; i++) {
    int A = X + i;
    int B = (Y + i) * Z;
      if (A == B) {
        cout << "Yes" << endl;
        return 0;
      }
  }

  cout << "No" << endl;
}
