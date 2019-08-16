/*
Maximum height of the staircase

Given an integer A representing the square blocks. The height of each square block is 1. The task is to create a staircase of max height using these blocks.

The first stair would require only one block, the second stair would require two blocks and so on.

Find and return the maximum height of the staircase.


Input Format

The only argument given is integer A.

Output Format

Return the maximum height of the staircase using these blocks.

Constraints

0 <= A <= 10^9

For Example

Input 1:
    A = 10
Output 1:
    4

Input 2:
    A = 20
Output 2:
    5

*/


int Solution::solve(int A) {
    int sum=0,i;
    if(A==0){
        return 0;
    }
    for(int i=1 ; i<A ; i++){
        sum = sum+i;
        if(sum==A){
            return(i);
            break;
        }
        if(sum>A){
            return(i-1);
            break;
        }
    }
}
