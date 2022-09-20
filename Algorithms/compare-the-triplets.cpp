// Compare the triplets - HackerRank
// Link to Problem:- https://www.hackerrank.com/challenges/compare-the-triplets/problem

#include <iostream>
using namespace std;

int main(){
  int a[3];
  int b[3];
  
  for(int i=0; i<3; i++)
    cin>>a[i];
  
  for(int i=0; i<3; i++)
    cin>>b[i];
  
   int r1=0, r2=0;
   
  for(int i=0; i<3; i++){
    if(a[i]>b[i])
      r1 = r1 + 1;
    else if(b[i]>a[i])
      r2= r2+1;
  }
  cout<<r1<<" "<<r2;
}
