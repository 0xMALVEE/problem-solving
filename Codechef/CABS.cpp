#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	
	while(tc--){
	    int x,y;
	    cin >> x >> y;
        
	    if(x > y){
	        cout << "SECOND" << endl;
	    }else if(x == y){
            cout << "ANY" << endl;
        }else{
            cout << "FIRST" << endl;
        }
	}
	return 0;
}
