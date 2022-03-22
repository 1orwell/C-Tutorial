#include <iostream>

using namespace std;

int main()
{
    string name = "Elise Ratcliffe";
    int age = 26;
    cout << "Hello " << name << endl;
    cout << "You are " << age << endl;
    cout << "There are " << name.length() << " characters in your name" << endl;
    cout << name.find("cliff", 0) << endl;
    cout << name.substr(2, 5) << endl;

    return 0;
}
