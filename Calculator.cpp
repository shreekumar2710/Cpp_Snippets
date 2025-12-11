#include <iostream>
using namespace std;
int main()
{
    char choice;
    double a;
    double b;
    double c;
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter second Number:";
    cin >> b;
    cout << "Enter choice?:";
    cin >> choice;

    switch (choice)
    {
    case 'A':
        c = a + b;
        cout << "Sum of " << a << " and " << b << ":" << c;
        break;
    case 'B':
        c = a - b;
        cout << "Difference of " << a << " and " << b << ":" << c;
        break;
    case 'C':
        c = a * b;
        cout << "Product of " << a << " and " << b << ":" << c;
        break;
    case 'D':
        c = a / b;
        cout << "Quotient of " << a << " and " << b << ":" << c;
        break;
    default:
        cout << "Enter a valid choice(A-E).";
        break;
    }
}