/*
Find sub-array with the given sum

Given an array of positive integers A and an integer B, find and return first continuous subarray which adds to B.

If the answer does not exist return an array with a single element "-1".

Note: First sub-array means the sub-array for which starting index in minimum.


Input Format

The first argument given is the integer array A.
The second argument given is integer B.

Output Format

Return the first continuous sub-array which adds to B and if the answer does not exist return an array with a single element "-1".

Constraints

1 <= length of the array <= 100000
1 <= A[i] <= 10^9 
1 <= B <= 10^9

For Example

Input 1:
    A = [1, 2, 3, 4, 5]
    B = 5
Output 1:
    [2, 3]

Input 2:
    A = [5, 10, 20, 100, 105]
    B = 110
Output 2:
    [-1]
*/

vector<int> Solution::solve(vector<int> &A, int B) {
    vector<int> res_vec;
    int i=0,j=0;
    long long int sum=0;
    while(j<=A.size() && i<=A.size()){
        if(sum==B){
            for(int k=i;k<j;k++){
                res_vec.push_back(A[k]);
            }
            return(res_vec);
        }
        else{
            if(sum<B){
                sum+=A[j];
                j++;
            }
            else{
                sum-=A[i];
                i++;
            }
        }
    }
    res_vec.push_back(-1);
    return(res_vec);
}
