#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
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

	int r = 0;
	int c = 0;

	int moves = 0;

	for(int i = 1;i <= 5;i ++){

		for(int j = 1;j <= 5;j ++){
			int n; 
			cin >> n;
			if(n == 1){
				r = i;
				c = j;
				break;
			}
		}
		if(r != 0){
			break;
		}
		
	}

	cout << abs(3 - r) + abs(3 - c);



	


	return 0;
}
 