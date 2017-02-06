#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t;
    cout << "Enter any thing and this will output the characters in that sentence or paragraph.\n";
    cin >> t;
    string str (t);
    cout << "The size of str is " << str.length() << " bytes.\n";
    return 0;
}
