/*
Find if there is a sub-array with 0 sum

Given an array of integers A, find and return whether the given array contains a subarray with a sum equal to 0.

If the given array contains a sub-array with sum zero return 1 else return 0.

Note: Length of sub array should be at least one.


Input Format

The only argument given is the integer array A.

Output Format

Return whether the given array contains a subarray with a sum equal to **0**.

Constraints

1 <= length of the array <= 100000
-10^9 <= A[i] <= 10^9 

For Example

Input 1:
    A = [1, 2, 3, 4, 5]
Output 1:
    0

Input 2:
    A = [5, 17, -22, 11]
Output 2:
    1

*/

int Solution::solve(vector<int> &A) {
    vector<long long int> A_sum;
    for(int i=0 ; i<A.size() ; i++){
        if(i==0){
            A_sum.push_back(A[i]);
        }
        else{
            A_sum.push_back(A[i]+A_sum[i-1]);    
        }
    }
    
    set<long long int> s;
    for(int i=0 ; i<A_sum.size() ;i++){
        s.insert(A_sum[i]);
    }
    if(s.count(0)){
        return 1;
    }
    if(A_sum.size()!=s.size()){
        return 1;
    }
    else{
        return 0;
    }
    
    
}
