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
  int W, B;
  cin >> W >> B;
  
    for (int i = 0; i < 1000000; i++) {
      if ( W * 1000 < B * i ) {
        cout << i << endl;
        break;
      }
    }

}
