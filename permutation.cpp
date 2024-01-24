#include<bits/stdc++.h>
using namespace std;

void make_permutations(vector <int> &arr, vector <vector<int>> &ans,  vector <int> &temp ){
  if(temp.size() == arr.size()){
    ans.push_back(temp);
    return;
  }

  for(int i=0; i< arr.size();i++){
    if(find(temp.begin(), temp.end(), arr[i]) == temp.end()){
      temp.push_back(arr[i]);
      make_permutations(arr, ans, temp);
      temp.pop_back();
    }
  }
}

int main(){
  vector<int> arr{1,2,3};
  vector <vector<int>> ans; 
  vector <int> temp;
  make_permutations(arr, ans, temp);

for (auto m : ans) {
    cout << "[";
    for (auto it = m.begin(); it != m.end(); ++it) {
      cout << *it;
      if (next(it) != m.end()) {
        cout << ",";
      }
    }
    cout << "]" << endl;
  }
}

