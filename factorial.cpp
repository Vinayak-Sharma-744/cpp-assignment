#include<iostream>
using namespace std;

int main()
{
    cout << "enter a no. to find it's factorial " << endl;
    int a;
    cin >> a;
    int b = 1;

    for (int i = a; i > 0; i--)
    {
        b=b*i;  
    }
    cout<<b<<endl;


    return 0;
}