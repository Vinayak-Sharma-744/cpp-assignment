#include <iostream>
using namespace std;

int main()
{
    cout << "enter the first no." << endl;
    int a;
    cin >> a;

    cout << "enter the second no." << endl;
    int b;
    cin >> b;

    //using 3 variables.
    int c;
    c = a;
    a = b;
    b = c;

    //using 2 variables.
    // a = a + b;
    // b = a - b;
    // a = a - b;

    cout << "now first no. became" <<" "<< a << endl;
    cout << "and second no. became" <<" "<< b << endl;

    return 0;
}