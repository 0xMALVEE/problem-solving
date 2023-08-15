#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
#define pb push_back


int main() {
    string name;
    cin >> name;

    int c = 0;
    int dc =0;

    sort(name.begin(), name.end());

    for (int i = 0; i < name.length(); i++) {
        if (name[i] == name[i + 1]) {
            c++;
        }
    }

    dc = name.size() - c;

    if (dc % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    
    

    return 0;
}