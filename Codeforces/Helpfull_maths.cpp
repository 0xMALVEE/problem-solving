#include <algorithm>
#include <iomanip>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class Solution {
public:
    void solve(std::istream& in, std::ostream& out) {
        string s;
        in >> s;
        sort(s.begin(), s.end());

        int p;

        if (s.length() % 2 == 0) {
            p = s.length() / 2;
        }
        else {
            p = s.length() / 2;
        }

        for (int i = p; i < s.length(); i++) {
            if (i < s.length() -1) {
                cout << s[i] << "+";
            }
            else {
                cout << s[i];
            }
            
        }
    }
};

void solve(std::istream& in, std::ostream& out)
{
    out << std::setprecision(12);
    Solution solution;
    solution.solve(in, out);
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    istream& in = cin;


    ostream& out = cout;

    solve(in, out);
    return 0;
}


