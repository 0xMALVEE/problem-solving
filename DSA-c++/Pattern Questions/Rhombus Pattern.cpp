#include <iostream>

using namespace std;

int main(){
    int r = 5;

    for(int i = r; i >= 1; i--){
        for(int j = 0;j < i -1; j++){
            cout << " ";
        }

        for(int k = 0; k < r; k++){
            cout << "*";
        }

        cout << endl;
    }

    return 0 ;
}