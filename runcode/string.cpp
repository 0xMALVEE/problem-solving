#include <bits/stdc++.h>
#include <iostream>
#include <string>


using namespace std;

int main(){

  string k = "hello this is computer";

// slice
  string hello = k.substr(0,5); 

  cout << hello << endl;

  string words = "apple oranges bananas";

// splitting
  std::vector<std::string> result;
    std::stringstream ss(words);
    std::string item;

    while (std::getline(ss, item, ' ')) {
        result.push_back(item);
    }

    for(auto x : result){
      cout << x << endl;
    }

// trimming
  string trimThis = "  a sdf hello   ";

  

  return 0;
  
}