// Array Manipulation - HackerRank
// Link to Problem:- https://www.hackerrank.com/challenges/crush/problem

/*
Algorithm:
(i) Add k to a and subtract k to b for every query.
(ii) Find the prefixSum of every index and return the maximum.
*/

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<int> arr(n+1,0); // array with size n+1 initialized with 0
    
    for(int i=0; i<queries.size(); i++){
        int a = queries[i][0]; // accessing a
        int b = queries[i][1]; //accessing b
        int k = queries[i][2]; //accessing k
        arr[a] += k; // adding k to a
        if((b+1) <= n)
        arr[b+1] -= k; // adding k to b if b+1 is less than or equal to n
    }
    
    long sum = 0, maxSum = 0;
    for(int i:arr){
        sum = sum+i; // adding prefixSum of every index
        maxSum = max(maxSum, sum); // finding maxSum, which will be the answer
    }
    return maxSum;
}
