#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  while(n--){
      int num;
      cin >> num;
    if(num==1){
        cout << "HARD";
        return 0;
    }
  }
  cout << "EASY";
  return 0;
}
