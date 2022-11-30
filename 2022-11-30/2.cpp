// Online C++ compiler to run C++ program online
#include <iostream>
using std::cin;
using std::cout;
using std::istream;
using std::ostream;

/* 
  run this in the terminal to test the code
  g++ -o 2.exe  ./2.cpp
  ./2.exe

  intput: 2194
  result: 1
*/

int main() {
    // Write C++ code here
    int n;
    int s = 0;
    int nr = 0;
    std::cout << "introdu valoare n: ";
    std::cin >> n;
    
    while (n > 0) {
        if (n%2 == 0) {
            s = s*10+n%10+1;
        }
        n = n/10;
    }
    
    if (s != 0) {
        nr = 1;
    }
    
    std::cout << "final result:" << nr << "\n";
    return 0;
}