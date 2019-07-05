'''
Maximum Consecutive Gap

Given an unsorted array, find the maximum difference between the successive elements in its sorted form.

Try to solve it in linear time/space.

Example :

Input : [1, 10, 5]
Output : 5 

Return 0 if the array contains less than 2 elements.

    You may assume that all the elements in the array are non-negative integers and fit in the 32-bit signed integer range.
    You may also assume that the difference will not overflow.
'''

def maximumGap(self, A):
        if(len(A)<2):
            return 0
        else:
            k = max(A)
            l = min(A)
            count = [0]*(k+2)
            for i in range(len(A)):
                count[A[i]] = count[A[i]]+1
            num = 0
            maxx = 0
            for i in range(l,len(count)):
                if(count[i]==0):
                    num = num+1
                if(count[i]>=1):
                    if(num>=maxx):
                        maxx = num
                        num = 0
        return(maxx+1)
