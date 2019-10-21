/*
Special Integer
Given an array of integers A and an integer B, find and return the maximum value K such that there is no subarray in A of size K with sum of elements greater than B. 
Input Format
The first argument given is the integer array A.
The second argument given is integer B.
Output Format
Return the maximum value of K (sub array length).
Constraints
1 <= length of the array <= 100000
1 <= A[i] <= 10^9
1 <= B <= 10^9
For Example
Input 1:
    A = [1, 2, 3, 4, 5]
    B = 10
Output 1:
    2

Input 2:
    A = [5, 17, 100, 11]
    B = 130
Output 2:
    3
*/
bool check(vector<int> &A,int B,int middle){
    long int sum = 0;
    for(int i=0 ; i<middle ; i++){
        sum+=A[i];
    }
    if(sum>B){
        return false;
    }
    for(int i = middle; i < A.size() ; i++) {
        sum += (A[i] - A[i-middle]);
        if(sum > B){
            return false;
        }   
    }
    return true;
}

int Solution::solve(vector<int> &A, int B) {
    int left = 1 , right = A.size() ;
    while(left <= right){
        int middle = 0.5*(left+right);
        if(check(A,B,middle)){
            left = middle+1;
        }
        else{
            right = middle-1;
        }
    }
    return left-1;
}
