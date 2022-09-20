// Dynamic Array - Hacker Rank
// Link to Problem:- https://www.hackerrank.com/challenges/dynamic-array/problem

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,q;
    int type,x,y;
    int lastAnswer=0;
    int seq=0, pos;
    cin>>n>>q;
    vector<vector<int>> ans(n);
    
    for(int i=0; i<q; i++){
        cin>>type>>x>>y;
        seq = ((x^lastAnswer)%n);
      
        if(type == 1){
            ans[seq].push_back(y);
        }else if(type == 2){
            pos = (y%ans[seq].size());
            lastAnswer = ans[seq][pos];
            cout<<lastAnswer<<endl;
        }
    }
    return 0;
}
