#include <iostream>
using std::cin;
using std::cout;
using std::istream;
using std::ostream;

/* 
  run this in the terminal to test the code
  g++ -o 1.exe  ./1.cpp
  ./1.exe

  intput: 4578
  result: 8644
*/
int main() {
    // Write C++ code here
    int x = 20;
    std::cin >> x;

    int c = 0;
    int z = 0;
    
    do {
        c = x % 10;
        if (c % 2 != 0) {
            z = z * 10 + c - 1;
            std::cout << "if   :" << z << "\n";
        } else {
            z = z * 10 + c;
            std::cout << "else :" << z << "\n";
        }
        x = x/10;
    } while (x > 0 );
    
    std::cout << "final result:" << z << "\n"; 
    return 0;
}

