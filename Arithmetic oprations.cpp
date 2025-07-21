#include <iostream>
#include <cmath>  // Include this to use fmod
using namespace std;

int main() {
    float x; 
    float y;
    cout << "Enter 1st no:";
    cin >> x;
    cout << "Enter 2nd no: "; 
    cin >> y;

    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Modulus (fmod): " << fmod(x, y) << endl;  // Use fmod for float %

    return 0;
}
