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

	int tw = 0;
	int b = 0;

	while(n){
		if(n >= 100){
			n -= 100;
			b++;
	
		}else if (n >= 20){
			n -= 20;
			b++;
		}else if(n >= 10){
			n -= 10;
			b++;
		}else if(n >= 5){
			n -= 5;
			b++;
		}else if (n >= 1){
			n -= 1;
			b++;
		}
	}
	cout << b;
	

	return 0;
}
 