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
        int tc;
        in >> tc;

        for (int i = 0; i < tc; i++) {
            long long a, b, c;
            in >> a >> b >> c;

            long long a1 = abs(b - c) + abs(c - 1);
            long long a2 = abs(a - 1);

            if (a1 > a2) {
                out << 1 << endl;
            }

            else if (a1 < a2) { out << 2 << endl; }
            else { out << 3 << endl; }
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


