#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    std::cin >> a >> b;

    if (a < b) {
      cout << '<' << std::endl;
    } else if (a > b) {
      cout << '>' << std::endl;
    } else {
      cout << '=' << std::endl;
    }
  }

  return 0;
}
