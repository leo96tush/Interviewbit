/*
Set Matrix Zeros
Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0. Note: This will be evaluated on the extra memory used. Try to minimize the space and time complexity. 
 Input Format:
The first and the only argument of input contains a 2-d integer matrix, A, of size M x N.
Output Format:
Return a 2-d matrix that satisfies the given conditions.
Constraints:
1 <= N, M <= 1000
0 <= A[i][j] <= 1
Examples:
Input 1:
    [   [1, 0, 1],
        [1, 1, 1], 
        [1, 1, 1]   ]

Output 1:
    [   [0, 0, 0],
        [1, 0, 1],
        [1, 0, 1]   ]

Input 2:
    [   [1, 0, 1],
        [1, 1, 1],
        [1, 0, 1]   ]

Output 2:
    [   [0, 0, 0],
        [1, 0, 1],
        [0, 0, 0]   ]
*/

void Solution::setZeroes(vector<vector<int> > &A) {
    set<int> row_set;
    set<int> column_set;
    
    int rows = A.size();
    int columns = A[0].size();
    
    //cout << rows << " " << columns << endl;
    
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            if(A[i][j]==0){
                row_set.insert(i);
                column_set.insert(j);
                //cout << i << " " << j << endl;
            }
        }
    }
     
    for(set<int>::iterator itr=row_set.begin() ; itr!=row_set.end() ; ++itr){
        int x = *itr;
        for(int i = 0 ; i < columns ; i++ ){
            A[x][i]=0;
        }
    }
    
    for(set<int>::iterator itr=column_set.begin() ; itr!=column_set.end() ; ++itr){
        int x = *itr;
        for(int i = 0 ; i < rows ; i++ ){
            A[i][x]=0;
        }
    }
}
