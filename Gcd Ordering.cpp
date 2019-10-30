/*
Gcd Ordering
Given an array of integers A, find and return the lexicographically greatest arrangement of A which follows the below rules:
If the size of A is less than 3 it is always possible to rearrange A.
A[i] = A[i-1] + GCD(A[i-1], A[i-2]) for all i > 2, where GCD(x, y) is greatest common factor of x and y.
Return the lexicographically greatest arrangement of A which follows the above rules, if it is not possible to rearrange A according to the above rules return -1. Note: Lexicographically means in dictionary order, i.e. if two arrangemnets are compared based on dictionary position the arrangements which comes afterwards is said to be Lexicographically greater. 
Input Format
The only argument given is the integer array A.
Output Format
Return the lexicographically greatest arrangement of A  which follows the above rules, 
if it is not possible to rearrange A according to the given rules return -1.
Constraints
1 <= length of the array <= 100000
0 <= A[i] <= 10^5
For Example
Input 1:
    A = [4, 6, 2, 5, 3]
Output 1:
     [2, 3, 4, 5, 6]

Input 2:
    A = [3, 8, 5]
Output 2:
    -1
*/
vector<int> Solution::solve(vector<int> &A) {
    if(A.size() < 3){
        sort(A.begin(),A.end());
        reverse(A.begin(),A.end());
        return(A);
    }
    int flag = 1;
    vector<int> B;
    B.emplace_back(-1);
    int n = A.size();
    
    
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());
    sort(A.begin()+1,A.end());
    for(int i=2 ; i<n ; i++){
        if(A[i]!=A[i-1]+__gcd(A[i-1],A[i-2])){
            flag=0;
            break;
        }
    }
    if(flag == 1){
        return A;
    }
    else{
        sort(A.begin(),A.end());
        for(int i=2 ; i<n ; i++){
            if(A[i]!=A[i-1]+__gcd(A[i-1],A[i-2])){
                return B;
            }
        }
    }
    
    return A;
}
