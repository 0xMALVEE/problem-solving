#include<bits/stdc++.h>

using namespace std;


int main(){
    int array[5] = {5,4,6,3,7};

    int n = 5;
    
    int counter = 1;

    while(counter < n){
      for (int i =0;i < n - counter; i++){
        if(array[i] > array[i + 1]){
          int temp = array[i];
          array[i] = array[i + 1];
          array[i + 1] = temp;
        }
      }
      counter++;
    }

    
    for(int i =0;i < n;i++){
        cout << array[i] << " ";
    }
    
    return 0 ;
}