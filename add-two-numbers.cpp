#include <iostream>
using namespace std;

int main() {
  // Read the number of test cases
  int T;
  cin >> T;

  // Process each test case
  while (T--) {
    // Read the two numbers to be added
    int A, B;
    cin >> A >> B;

    // Add the numbers and print the result
    cout << A + B << endl;
  }

  return 0;
}
