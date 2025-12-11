#include <iostream>
using namespace std;

int main()
{
    double temperature, converted_temperature;
    char Unit;
    cout << "Enter Temperature:";
    cin >> temperature;
    cout << "Enter Current Unit:";
    cin >> Unit;

    switch (Unit)
    {
    case 'C':
    case 'c':
        converted_temperature = (temperature * 9 / 5) + 32;
        cout << "Temperature in Farenheit: " << converted_temperature << " F.";
        break;
    case 'f':
    case 'F':
        converted_temperature = (temperature - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << converted_temperature << " C.";
        break;
    default:
        cout << "Enter a valid temperature unit(C or F).";
        break;
    }
}