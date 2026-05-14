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
  int N, m, s;
  string str;
  cin >> N >> str;
  m = str.size();
  s = N - m;

  for (int i = 0; i < s; i++) {
    cout << "o";
  }

  cout << str << endl;
}
