#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int k){
    int s = 0;
    int e = n; 

    while(s <= e){
        int mid = (s+e) / 2;
        if(arr[mid] == k){
            return mid;
        }else if (arr[mid] > k){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return -1;
}

int main(){
    int array[5] = {1,2,3,4,5};


    cout << binarySearch(array, 5, 9) << endl;
    
    return 0 ;
}