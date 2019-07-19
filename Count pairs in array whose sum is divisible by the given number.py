'''
Count pairs in array whose sum is divisible by the given number

Given an array of integers A and an integer B, find and return the number of pairs in A whoes sum is divisible by B.

Since the answer may be large, return the answer modulo (10^9 + 7).


Input Format

The first argument given is the integer array A.
The second argument given is the integer B.

Output Format

Return the total number of pairs for which the sum is divisible by B modulo (10^9 + 7).

Constraints

1 <= length of the array <= 100000
1 <= A[i] <= 10^9 
1 <= B <= 10^6

For Example

Input 1:
    A = [1, 2, 3, 4, 5]
    B = 2
Output 1:
    4

Input 2:
    A = [5, 17, 100, 11]
    B = 28
Output 2:
    1

'''
class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        answer=0
        count = [0]*B
        for i in range(len(A)):
            count[A[i]%B]=count[A[i]%B]+1
        for i in range(1,len(count)):
            j=B-i
            if(i<=j):
                if(i==j):
                    answer=(answer+(count[i]*(count[i]-1))//2)%(7+10**9)
                else:
                    answer=(answer+(count[i]*count[j]))%(7+10**9)
                    j=j-1
        answer=(answer+(count[0]*(count[0]-1))//2)%(7+10**9)
        return(answer)
