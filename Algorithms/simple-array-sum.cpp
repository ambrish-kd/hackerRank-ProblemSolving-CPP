//Simple Array Sum - HackerRank Probelm Solving(Algorithms)

#include <iostream>
using namespace std;

int main()
{
  int s,sum=0;
  cin>>s;
  
  int a[s];
  for(int i=0; i<s; i++)
  {
    cin>>a[i];
  }
  
  for(int i=0; i<s; i++)
  {
    sum =sum+a[i];
  }
  
  cout<<sum;
}
