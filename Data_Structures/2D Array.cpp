//2D Array - HackerRank
//Link to Problem:- https://www.hackerrank.com/challenges/2d-array/problem

#include <stdio.h>
int main(){
    int a[6][6];
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int out = -100, sum = 0;
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum = 0;
            sum += a[i][j];
            sum += a[i][j+1];
            sum += a[i][j+2];
            sum += a[i+1][j+1];
            sum += a[i+2][j];
            sum += a[i+2][j+1];
            sum += a[i+2][j+2];
            
            if(sum > out){
                out = sum;
            }
        }
    }
    
    printf("%d",out);
    return 0;
}
