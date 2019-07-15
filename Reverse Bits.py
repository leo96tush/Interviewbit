'''
Reverse Bits

Reverse bits of an 32 bit unsigned integer

Example 1:

x = 0,

          00000000000000000000000000000000  
=>        00000000000000000000000000000000

return 0

Example 2:

x = 3,

          00000000000000000000000000000011 
=>        11000000000000000000000000000000

return 3221225472

Since java does not have unsigned int, use long
'''

class Solution:
    # @param A : unsigned integer
    # @return an unsigned integer
    def reverse(self, A):
        mylist = [0]*32
        i = 0
        while(A):
            mylist[i]=A%2
            A=A//2
            i=i+1
        mylist = mylist[::-1]
        B=0
        for i in range(len(mylist)):
            B = B+((2**i)*mylist[i])
        return(B)
