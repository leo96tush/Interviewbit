'''

Kth Row of Pascal's Triangle

Given an index k, return the kth row of the Pascal's triangle.

Pascal's triangle : To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:

Input : k = 3

Return : [1,3,3,1]

    NOTE : k is 0 based. k = 0, corresponds to the row [1]. 

Note:Could you optimize your algorithm to use only O(k) extra space?
'''

class Solution:
    # @param A : integer
    # @return a list of integers
    def getRow(self, A):
        B = list()
        p = A
        if(A==0):
            return([1])
        elif(A==1):
            return([1,1])
        else:
            B.append([1])
            B.append([1,1])
            A = A-2
            while(A+1):
                m = B[len(B)-1]
                b = [0]*(len(m)+1)
                b[0]=1
                b[len(b)-1]=1
                for i in range(1,len(b)-1):
                    b[i]=m[i]+m[i-1]
                B.append(b)
                A=A-1
        return(B[p])
