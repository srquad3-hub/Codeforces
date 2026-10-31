#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<< "Enter lem weigh: ";
    cin >> a ;
    cout << "Enter bob weigh: ";
    cin>> b;
    int years=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        years++;


    }
    cout <<"Years: " <<years << endl;
}