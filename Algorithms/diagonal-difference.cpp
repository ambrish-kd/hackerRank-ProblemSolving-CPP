// Diagonal Difference - HackerRank
// Link to Problem:- https://www.hackerrank.com/challenges/diagonal-difference/problem

#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  int a[n][n];
  int sum1 = 0, sum2 = 0;
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>a[i][j];
    }
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==j)
        sum1 = sum1 + a[i][j];
      if(i+j == n-1)
        sum2 = sum2 + a[i][j];
    }
  }
  int diff = abs(sum1-sum2);
  cout<<diff;
}
