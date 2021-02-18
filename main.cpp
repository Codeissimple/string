#include <iostream>
using namespace std;

int main()
{
    string name, address, phone;

    cout << "Enter your name: ";
    cin >> name;
    cout << "You entered: " << name << endl;

    cout << "\nEnter your address: ";
    cin >> address;
    cout << "You entered: "<< address <<endl;

    cout << "\nEnter your phone number: " << phone << endl;
    cin >> phone;
    cout << "\nYou entered: " << phone << endl;

    cout << "\nYour data: \n" << name << '\n' << address << '\n' << phone << endl; 

    return 0;
}