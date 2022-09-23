// Plus Minus - HackerRank
// Link to Problem:- https://www.hackerrank.com/challenges/plus-minus/problem

#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

// function plus-minus
void plusMinus(float a[], int siz){
  float plusCount=0.0, minusCount=0.0, zeroCount=0.0;
  for(int i=0; i<siz; i++){
    if(a[i]>0){
      plusCount++;
    }else if(a[i]<0){
      minusCount++;
    }else{
      zeroCount++;
    }
  }
  printf("%0.6f\n", plusCount/siz);
  printf("%0.6f\n", minusCount/siz);
  printf("%0.6f\n", zeroCount/siz);
}

// driver function
int main(){
  int s;
  cin>>s;
  float arr[s];
  for(int i=0; i<s; i++){
    cin>>arr[i];
  }
  plusMinus(arr, s);
  return 0;
}
