'''
Pascal Triangle

Given numRows, generate the first numRows of Pascal's triangle.

Pascal's triangle : To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]
'''


    # @param A : integer
    # @return a list of list of integers
    def solve(self, A):
        B = list()
        if(A==0):
            return([])
        elif(A==1):
            return([[1]])
        elif(A==2):
            return([[1],[1,1]])
        else:
            B.append([1])
            B.append([1,1])
            A = A-2
            while(A):
                m = B[len(B)-1]
                b = [0]*(len(m)+1)
                b[0]=1
                b[len(b)-1]=1
                for i in range(1,len(b)-1):
                    b[i]=m[i]+m[i-1]
                B.append(b)
                A=A-1
        return(B)
