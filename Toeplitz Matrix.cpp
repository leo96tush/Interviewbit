/*
Toeplitz Matrix
Given a matrix of integers A of size N x M. You have to whether the given matrix is Toeplitz or not.
A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same element.
Return 1 if the matrix is Toeplitz else return 0. 
Input Format
The first argument given is the integer matrix A.
The second argument given is integer B.
Output Format
Return 1 if the matrix is Toeplitz else return 0.
Constraints
1 <= N, M <= 500
0 <= A[i] <= 10^9
For Example
Input 1:
    A =[    [1, 2, 3, 4]
            [5, 1, 2, 3]
            [9, 5, 1, 2]   ]
Output 1:
    1
    Explanation 1:
        Diagonal 1: [9]
        Diagonal 2: [5, 5]
        Diagonal 3: [1, 1, 1]
        Diagonal 4: [2, 2, 2]
        Diagonal 5: [3, 3]
        Diagonal 6: [4]

Input 2:
    A = [   [5, 6, 6, 8]
            [0, 5, 6, 8]
            [8, 0, 5, 6] ]
Output 2:
    0
    
*/

bool isvalid(int x,int y,vector<vector<int> > &A){
    int column = A[0].size();
    int row = A.size();
    if(x>=0 && x<row && y>=0 && y<column){
        return 1;
    }
    return 0;
}

int check(vector<vector<int>> &A){
    int column = A[0].size();
    int row = A.size();
    for(int j=0 ; j<column ; j++){
        int x = A[0][j],p=0,q=j;
        while(isvalid(p,q,A)){
            if(A[p][q]!=x){
                return 0;
            }
            else{
                p++;
                q++;
            }
        }
    }
    
    for(int i=0 ; i<row ; i++){
        int x = A[i][0],p=i,q=0;
        while(isvalid(p,q,A)){
            if(A[p][q]!=x){
                return 0;
            }
            else{
                p++;
                q++;
            }
        }
    }
    return 1;
}

int Solution::solve(vector<vector<int> > &A) {
    if(check(A)){
        return 1;
    }
    return 0;
}
