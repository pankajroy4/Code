#include<bits/stdc++.h>
using namespace std;

void all_prime(int n){
  vector<bool> v(n+1, true);
  vector <int> ans;
  v[1]= v[n]=false;
  int count =0;
  for(int i=2; i<n; i++){
    if(v[i]){
      count++;
      ans.push_back(i);
      for(int j = 2 * i; j<n; j += i){
        v[j] = false;
      }
    }
  }
  
  for(auto prime : ans){
    cout<< prime<<" ";
  }
  cout<<endl<<"Total prime number between 1 and "<<n<<" are: "<<count<<endl;
}

int main(){
  all_prime(50);
}
