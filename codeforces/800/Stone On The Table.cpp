#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 

int main() {
	init_code();
	int n;
	cin >> n;
	vector<char> s;

	int res = 0;

	for(int i = 0;i < n;i++){
		char k;
		cin >> k;
		s.push_back(k);
	}

	for(int i = 0;i < s.size();i++){
		if(s[i] == s[i + 1]){
			res++;
		}
	}

	cout << res;

	

	return 0;
}
 