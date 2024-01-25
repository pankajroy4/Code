#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if(b == 0){
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  int g_cd  = gcd(a, b);
  return (a*b) / g_cd;
}

int main(){
  int a = 9, b = 12;
  cout<< "LCM of "<<a<<" and "<<b<< " is: "<< lcm(a, b)<<endl;
}

