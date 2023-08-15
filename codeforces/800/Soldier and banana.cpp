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
        int k, n, w;
        in >> k >> n >> w;

        int tp = 0;

        for (int i = 1; i <= w; i++) {
            tp += i * k;
        }

        if (tp - n >= 0) {
            out << tp - n;
        }
        else {
            out << 0;
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


