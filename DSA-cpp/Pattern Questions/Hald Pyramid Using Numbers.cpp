#include <iostream>

using namespace std;

int main(){
    int r = 5;
    int c = 5;

    int k = 1;
    for(int i = r; i >= 1; i--){
      for(int j = 1; j <= k;j++){
        cout << k;
      }
      cout << endl;
      k++;
    }
    return 0 ;
}