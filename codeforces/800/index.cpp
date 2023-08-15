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
// Powered by caide (code generator, tester, and library code inliner)


class Solution {
public:
    void solve(std::istream& in, std::ostream& out) {
		int tc;
		in >> tc;
		while (tc--) {
			int n;
			in >> n;
			string s;
			in >> s;

			int q = 0;
			int a = 0;
			if (s[n - 1] != 'A') {
				out << "No" << endl;
			}
			else {

				for (int i = 0; i < n; i++) {
					if (s[i] == 'Q') {
						q++;
					}
					else {
						a++;
					}
				}
				if (q > a) {
					out << "No" << endl;
				}
				else {
					out << "Yes" << endl;
				}
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


