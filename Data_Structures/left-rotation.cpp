// Left Rotation - HackerRank
// Link to Problem - https://www.hackerrank.com/challenges/array-left-rotation/problem

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    
    d = d%n;
  
    for(int i=d; i<n; i++)
        cout<<v[i]<<' ';
    for(int i=0; i<d; i++)
        cout<<v[i]<<' ';
    return 0;
}
