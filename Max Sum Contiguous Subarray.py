'''
Max Sum Contiguous Subarray

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],

the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum.'''

def maxSubArray(self, A):
        maxx = -(10**32)
        for i in range(len(A)):
            for j in range(i+1,len(A)):
                arr = A[i:j]
                k = sum(arr)
                if(k>=maxx):
                    maxx = k
        return(maxx)
