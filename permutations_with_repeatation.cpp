#include<bits/stdc++.h>
using namespace std;

vector <int> temp;

void permuataions(vector <int> &v, int &n, vector<vector<int>> &ans){
  if(temp.size()== n){
    if( set<int> (temp.begin(), temp.end()).size() !=1 )
      ans.push_back(temp);
    return;
  }

  for(int i=0; i< v.size(); i++){
    temp.push_back(v[i]);
    permuataions(v, n, ans);
    temp.pop_back();
  }
}

int main(){
  vector<int> v{1,2,3};
  int len = 2;

  vector< vector <int>> ans;
  permuataions(v, len, ans);

  for(auto arr: ans){
    cout << "[";
    for(auto i: arr){
      cout<<i<<",";
    }
    cout<<"]"<<endl;
  }
  cout<< "Total: "<<ans.size()<<endl;
}




