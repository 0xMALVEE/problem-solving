#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int uC = 0;

    for (int i = 0; i < name.length(); i++) {
        if (isupper(name[i])) {
            uC++;
        }
    }

    if (uC == name.length() / 2) {
       
      transform(name.begin(), name.end(), name.begin(),
            [](unsigned char c) { return std::tolower(c); });
      cout << name;
    }
    if (uC > name.length() / 2) {
        transform(name.begin(), name.end(), name.begin(),
            [](unsigned char c) { return std::toupper(c); });
        cout << name;
    }

    if (uC < name.length() / 2) {
        transform(name.begin(), name.end(), name.begin(),
            [](unsigned char c) { return std::tolower(c); });
        cout << name;
    }
    

    return 0;

}

