#include<bits/stdc++.h>
using namespace std;

bool check_prime(string &str, int start, int end){
  if(start >= end) return true;

  if(str[start] != str[end]) return false;

  return check_prime(str, ++start, --end);
}

int main(){
  string str = "NAMAN";
  cout<<check_prime(str, 0, str.size()-1)<<endl;
  return 0;
}