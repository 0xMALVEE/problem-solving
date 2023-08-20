#include<bits/stdc++.h>

using namespace std;


int main(){
    int array[6] = {1,1,2,3,3,1};

    int n = 6;
    
    int current = 0;
    for(int i =0;i<n;i++){
        current = 0;
        for(int j = i;j < n;j++){
            current += array[j];
            cout << current << endl;
        }
    }
    
    // printing array
    // for(int i =0;i < n;i++){
    //     cout << array[i] << " ";
    // }
    
    return 0 ;
}