// A Very Big Sum - HackerRank
// Link to Problem - https://www.hackerrank.com/challenges/a-very-big-sum/problem

#include <iostream>
using namespace std;

int main(){
  int size;
  cin>>size;
  
  long arr[size], sum=0;
  for(int i=0; i<size; i++)
    cin>>arr[i];
  
  for(int i=0; i<size; i++)
    sum = sum + arr[i];
  
  cout<<sum;
}
