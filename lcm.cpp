#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
  if(b == 0){
    return a;
  }
  return lcm(b, a % b);
}

int main(){
  int a = 21, b =27;
  cout<< "LCM of "<<a<<" and "<<b<< " is: "<< lcm(a, b)<<endl;
}

