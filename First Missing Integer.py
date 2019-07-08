'''
First Missing Integer

Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.'''

def firstMissingPositive(self, A):
        max_element = max(A)
        min_element = min(A)
        if(max_element<=0):
            return(1)
        if(min_element>1):
            return(1)
        B = set(A)
        for i in range(1,max_element+1):
            if i not in B:
                return(i)
        return(max_element+1)
