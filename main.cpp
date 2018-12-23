#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }


/*
 * Use the example above as a model for a program that converts yen, euros, and pounds into dollars.
 * If you like realism, you can find conversion rates on the web.
 */


int main()
{
cout << "Enter 0 for Yen\n";
cout << "Enter 1 for Euros\n";
cout << "Enter 2 for Pounds\n";

int input = 0;
double amount = 0;

cout << "Enter input for currency: ";
cin >> input;

cout << "Enter an amount: ";
cin >> amount;

if (input == 0)
{
    cout << "Yen: " << amount << "\n";
    cout << "Euros: " << amount * .0079 << "\n";
    cout << "Pounds: " << amount * 0.0071 << "\n";
    cout << "Dollars: " << amount * 0.0090 << "\n";

}
else if (input == 1)
{
        cout << "Yen: " << amount * 126.44 << "\n";
        cout << "Euros: " << amount << "\n";
        cout << "Pounds: " << amount * 0.90 << "\n";
        cout << "Dollars: " << amount * 1.14 << "\n";

}
else if (input == 2)
{
    cout << "Yen: " << amount * 140.58 << "\n";
    cout << "Euros: " << amount * 1.11 << "\n";
    cout << "Pounds: " << amount << "\n";
    cout << "Dollars: " << amount * 1.27 << "\n";
}


return 0;
}