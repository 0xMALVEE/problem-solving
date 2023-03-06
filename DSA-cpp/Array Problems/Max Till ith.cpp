#include<bits/stdc++.h>

using namespace std;


int main(){
    int array[6] = {0,-9,1,3,-4,5};

    int n = 6;
    
    int mx = 0;
    for(int i =0;i<n;i++){
        mx = max(mx, array[i]);
        cout << mx << " ";
    }
    
    // printing array
    // for(int i =0;i < n;i++){
    //     cout << array[i] << " ";
    // }
    
    return 0 ;
}