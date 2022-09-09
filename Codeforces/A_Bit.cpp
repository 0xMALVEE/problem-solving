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
#include <fstream>
#include <iostream>


using namespace std;


class Solution {
public:
    void solve(std::istream& in, std::ostream& out) {
        int tc;
        in >> tc;

        int x = 0;

        for (int i = 0; i < tc; i++) {
            string s;
            in >> s;
            if (s[1] == '+') {
                x++;
            }
            else {
                x--;
            }
        }
        out << x;
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


