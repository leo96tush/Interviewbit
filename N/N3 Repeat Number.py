'''
N/3 Repeat Number

You're given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space.

If so, return the integer. If not, return -1.

If there are multiple solutions, return any one.

Example :

Input : [1 2 3 1 1]
Output : 1 
1 occurs 3 times which is more than 5/3 times. 

Time Complexity : O(n)
Space Complexity : O(k) (k = max(A))
'''

def repeatedNumber(self, A):
        n = len(A)
        max_element = max(A)
        min_element = min(A)
        count = [0]*(max_element+1)
        for i in range(len(A)):
            count[A[i]]=count[A[i]]+1
        for i in range(len(count)):
            if(count[i]>(n/3)):
                return(i)
        return(-1)
