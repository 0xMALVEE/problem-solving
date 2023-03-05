#include <iostream>

using namespace std;

int main(){
    int r = 8;
    int c = 8;

    int k = 1;

    for(int i = 1;i <= r; i++ ){
        for(int j = 1; j <= c;j++){
            if(r/2 >= i){
                if(j <= k || c - k < j){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }else{
                if(j >= k+1 || c - k >= j){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        k++;
        cout << endl;
    }
    return 0 ;
}