//Check whether a number can be expressed as sum of two distinct prime numer or not?
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num){
  if(num <= 1) return false;

  for(int i=2; i*i <= num ; i++){
    if(num%i == 0) {
      return false; 
    }
  }
  return true;
}

bool is_sum_of_two_prime_num(int n, int &prime1, int &prime2, int start = 2){

 if (n <= 1 || start >= n) 
    return false;

  if (is_prime(start) && is_prime(n - start) && start != (n-start)) {  // prime1 and prime2 must be distinct
    prime1 = start;
    prime2 = n - start;
    return true;
  }

  return is_sum_of_two_prime_num(n, prime1, prime2, start + 1);
}

int main(){
  int num = 6;
  int prime1;
  int prime2;
    if (is_sum_of_two_prime_num(num, prime1, prime2))
      cout << num << " can be expressed as the sum of two prime numbers: " << prime1 << " and " << prime2 <<endl;
    else 
      cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    
  return 0;
}