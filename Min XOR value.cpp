/*
Min XOR value

Given an array of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.

Examples :
Input
0 2 5 7
Output
2 (0 XOR 2)
Input
0 4 7 9
Output
3 (4 XOR 7)

Constraints:
2 <= N <= 100 000
0 <= A[i] <= 1 000 000 000
*/

int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<int> xor_value;
    int min_val;
    for(int i=0;i<A.size()-1;i++){
        xor_value.push_back((A[i])^(A[i+1]));
    }
    min_val = xor_value[0];
    for(int i=0;i<xor_value.size();i++){
        if(xor_value[i]<min_val){
            min_val=xor_value[i];
        }
    }
    return(min_val);
}
