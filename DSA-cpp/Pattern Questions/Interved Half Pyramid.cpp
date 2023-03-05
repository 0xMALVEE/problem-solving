#include <iostream>

using namespace std;

int main(){
    int r = 5;
    int c = 4;

    for(int i = r; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0 ;
}