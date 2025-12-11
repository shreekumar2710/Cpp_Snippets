#include <iostream>
using namespace std;

void showbalance(double Balance);
double deposit(double Balance);
double withdrawl(double Balance);

int main()
{
    double Balance = 0;
    int choice = 0;
    cout << "Enter Balance:";
    cin >> Balance;
    cout << "Enter Choice:";
    cin >> choice;

    switch (choice)
    {
    case 1:
        showbalance(Balance);
        break;
    case 2:
        Balance = deposit(Balance);
        cout << Balance;
        break;
    }
}

void showbalance(double Balance)
{
    cout << "The Balance is:" << Balance;
}

double deposit(double Balance)
{
    double x;
    cout << "Enter the Amount to be Credited:";
    cin >> x;
    Balance += x;
    return Balance;
}