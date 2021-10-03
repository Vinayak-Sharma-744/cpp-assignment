// Conversion of temprature units

#include <iostream>
using namespace std;

int main()
{
    float input;
    cout << "enter the temprature you want to convert" << endl;
    cin >> input;

    cout << "do you want to convert it into farenheit or celsius? " << endl;
    cout << "'f' for farenheit and 'c' celsius" << endl;
    string conversion;
    cin >> conversion;

    if (conversion == "f")
    {
        float convertF;
        convertF = (input * 9 / 5) + 32;
        cout << convertF << " "
             << "degree Fahrenheit" << endl;
    }
    else if (conversion == "c")
    {
        float convertC;
        convertC = (input - 32) * 5 / 9;
        cout << convertC << " "
             << "degree Celsius" << endl;
    }

    return 0;
}