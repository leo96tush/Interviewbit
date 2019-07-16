'''
Xor queries

You are given an array (containing only 0 and 1) as element of N length.

Given L and R, you need to determine value of XOR of all elements from L to R (both inclusive) and number of unset bits (0's) in the given range of the array.

Input

First argument contains the array of size N containing 0 and 1 only (1<=N<=100000). 

Second argument contains a 2D array with Q rows and 2 columns, each row represent a query with 2 columns representing L and R. 

(1<=Q<=100000), (1<=L<=R<=N).

Output

Return an 2D array of Q rows and 2 columns i.e the xor value and number of unset bits in that range respectively for each query.

Examples

Input

1 0 0 0 1
2 4
1 5 
3 5

Output

0 3
0 3
1 2

Explanation

Testcase 1-

In the given case the bit sequence is of length 5 and the sequence is 1 0 0 0 1. For query 1 the range is (2,4), and the answer is (array[2] xor array[3] xor array[4]) = 0, and number of zeroes are 3, so output is 0 3. Similarly for other queries.

'''
class Solution:
    # @param A : list of integers
    # @param B : list of list of integers
    # @return a list of list of integers
    def solve(self, A, B):
        length=len(A)
        count_of_ones = [0]*length
        count_of_ones[0]=A[0]
        mylist = list()
        for i in range(1,len(A)):
            count_of_ones[i]=count_of_ones[i-1]+A[i]
        for q in B:
            m = q[0]-1
            n = q[1]-1
            length_of_interval = (n-m+1)
            if(m>=1):
                number_of_ones = count_of_ones[n]-count_of_ones[m-1]
            else:
                number_of_ones = count_of_ones[n]
            number_of_zeros=length_of_interval-number_of_ones
            mylist.append([number_of_ones%2,number_of_zeros])
            number_of_zeros=0
            number_of_ones=0
        return(mylist)
