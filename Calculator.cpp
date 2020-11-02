/*
    How to give Input: (examples)
    2 + 5
    5 * 10
*/

#include <iostream>
#include <math.h>
using namespace std;

void calculate(float x, char C, float y);

int main()
{
    float a, b;
    char c;

    // 2 + 5 (format)
    cout << "Enter two values & operator: ";
    cin >> a >> c >> b;

    cout << "\nResult: ";
    calculate(a, c, b);

    return 0;
}

void calculate(float x, char C, float y)
{
    switch (C)
    {
    case '+': 
        cout << (x + y); 
        break;
    case '-': 
        cout << (x - y); 
        break;
    case '*': 
        cout << (x * y); 
        break;
    case '/': 
        cout << (x / y); 
        break;
    case '^': 
        cout << (pow(x, y));
        break;
    default: cout << ("Invalid Operator");
    }
}
