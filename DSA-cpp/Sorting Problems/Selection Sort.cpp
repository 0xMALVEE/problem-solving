#include<bits/stdc++.h>

using namespace std;


int main(){
    int array[5] = {5,4,6,3,7};

    int n = 5;

    for(int i =0;i < n - 1; i++){
        for(int j = i + 1;j < n; j++){
            if(array[j] < array[i]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i =0;i < n;i++){
        cout << array[i] << " ";
    }
    
    return 0 ;
}