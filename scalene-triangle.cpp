#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  
  for (int i = 0; i < t; i++) {
    int a, b, c;
    cin >> a >> b >> c; 

    
    if (a != b && b != c && a != c) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
