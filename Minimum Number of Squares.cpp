/*

Minimum Number of Squares
Given an integer N. Return count of minimum numbers, sum of whose squares is equal to N. Example: N=6 Possible combinations are :
(12 + 12 + 12 + 12 + 12 + 12)
(12 + 12 + 22)
So, minimum count of numbers is 3 (i.e. 1,1,2). Note: 1 ≤ N ≤ 105

*/

int dp[100000];

int minsq(int A){
    int n = A;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    
    for(int i=4 ; i<=n ; i++ ){
        
        dp[i] = i;
        
        for( int x=1 ; x<=ceil(sqrt(i)) ; x++){
            int temp = x*x ;
            if( temp>i ){
                break;
            }
            else{
                dp[i] = min( dp[i] , 1+dp[i-temp] );
            }
        }
    }
    
    return dp[n];
}



int Solution::countMinSquares(int A) {
    return minsq(A);
}
