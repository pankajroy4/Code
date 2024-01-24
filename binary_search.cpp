#include <bits/stdc++.h> 
using namespace std;

int binary_search(int low, int high, int target, vector<int> &arr){
  if(low > high) return -1; 

  int mid = low + (high - low)/2;

  if (arr[mid] == target) return mid ;
  else if (arr[mid] < target) {
    low = mid + 1;
    return binary_search(low, high, target, arr);
  }
  else 
     return  binary_search(low, mid - 1, target, arr);
}

int main(){

  vector <int> arr{10, 22, 29, 56, 89, 90};
  int ans = binary_search(0, arr.size() - 1, 89, arr );
  ans == -1? cout<<"Target not found"<<endl : cout<<"Target present at index : "<< ans <<endl;
  return 0;
}

