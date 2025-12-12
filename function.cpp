//function and function prototype
#include <iostream>
using namespace std;
int add(int , int ); 
int main() {
    int a, b, sum;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum: " << add(a,b) << endl;
    return 0;
}
int add(int x, int y) {
    return x + y;
}
// This program takes two integers as input and outputs their sum using a function.
