#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n = 10;

    bool isprime = true;

    for(int i =2; i< sqrt(n) ; i++){
        if(n % i == 0){
            cout << "Non-Prime" << endl;
            isprime = false;
            break;
        }
    }

    if(isprime){
        cout << "Prime" << endl;
    }
    

    return 0 ;
}