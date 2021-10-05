#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    double n;
    double result = 1;

    cout << "Give me any integer number between 0-15 :" << endl;
    cin >> n;

    if (n < 0) {
        cout << "Error condition" << endl;
    }
    else if (n == 0) {
        cout << "K(0)=1" << endl;
    }
    else {
        int c = 1;
        while (n >= c && c < 5 && n<15) {
            result = n * result;
            n++;
            c++;
        }
        cout << "Factorial of a number is:" << result << endl;
    }
    return 0;
}