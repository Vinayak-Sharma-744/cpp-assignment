// WAP to ask the user to type floating point no. for radius and calculate and display area.

#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the radius of which you want to calculate area"<<endl;
    float rad;
    cin>>rad;

    float pi = 3.14159;

    float area = rad*rad*pi;

    cout<<area<<endl;


    return 0;
}