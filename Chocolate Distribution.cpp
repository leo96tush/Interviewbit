/*
Chocolate Distribution
Given an array A of N integers where each value represents number of chocolates in a packet. i-th can have A[i] number of chocolates. There are B number students, the task is to distribute chocolate packets following below conditions:
1. Each student gets one packet.
2. The difference between the number of chocolates in packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.
Return the minimum difference (that can be achieved) between maximum and minimum number of chocolates distributed. CONSTRAINTS
0 <= N <= 10^5
1 <= A[i] <= 10^6
0 <= B <= 10^5
SAMPLE INPUT
A : [3, 4, 1, 9, 56, 7, 9, 12]
B : 5
SAMPLE OUTPUT
6
EXPLANATION
Minimum Difference is 6
The set goes like 3,4,7,9,9 and the output 
is 9-3 = 6
*/
int result(vector<int> &A, int B){
    int n = A.size();
    sort(A.begin(),A.end());
    int minm = 7+1000000000;
    int first = 0 , last = 0;
    for(int i=0 ; i<n-B+1 ; i++){
        minm = min(minm,A[i+B-1]-A[i]);
    }
    return minm;
}


int Solution::solve(vector<int> &A, int B) {
    if(B==0 || A.size()<B){
        return 0;
    }
    return result(A,B);
}
