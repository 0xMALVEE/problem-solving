#include<bits/stdc++.h>

using namespace std;


int main(){
    int array[5] = {5,4,6,3,7};

    int n = 5;
    
    for(int i =1;i < n;i++){
        int current = array[i];
        int j = i - 1;

        while(array[j] > current && j >= 0){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
    
    for(int i =0;i < n;i++){
        cout << array[i] << " ";
    }
    
    return 0 ;
}