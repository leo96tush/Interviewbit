/*
Maximum Difference
Given an array of integers A and an integer B. Find and return the maximum value of | s1 - s2 | where s1 = sum of any subset of size B, s2 = sum of elements of A - sum of elemets of s1 Note |x| denotes the absolute value of x. 
Input Format
The arguments given are the integer array A and integer B.
Output Format
Return the maximum value of | s1 - s2 |.
Constraints
1 <= B < length of the array <= 100000
1 <= A[i] <= 10^5 
For Example
Input 1:
    A = [1, 2, 3, 4, 5]
    B = 2
Output 1:
    9

Input 2:
    A = [5, 17, 100, 11]
    B = 3
Output 2:
    123
*/
int result(vector<int> &A , int B){
    sort(A.begin(),A.end());
    
    int n = A.size();
    int total_sum = accumulate(A.begin(),A.end(),0);
    
    
    int sum1 = 0;
    for(int i=0 ; i<B ; i++){
        sum1+=A[i];
    }
    
    int sum2 = 0;
    for(int i=n-B ; i<n ; i++){
        sum2+=A[i];
    }
    return (max(abs(total_sum-2*sum1),abs(total_sum-2*sum2))) ;
    
    
}


int Solution::solve(vector<int> &A, int B) {
    return result(A,B);
}
