int solve(vector<vector<int>> &A , int B){
    int row = A.size();
    int column = A[0].size();
    int i = 0;
    int j = column - 1;
    while(i>=0 && i<row && j>=0 && j<column){
        if(A[i][j]==B){
            return 1;
        }
        else if(A[i][j]<B){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}



int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return solve(A,B);
}
