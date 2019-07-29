'''
Same Format String

Given two strings A and B. Check if B contains same characters as that of given string A and in the same order.

Note

    1: A and B contain only UPPERCASE Letters.
    2: No two consecutive characters are same in A.
    3: You can only use constant amount of extra memory. 


Input Format

The first argument given is string A.
The second argument given is string B.

Output Format

Return 1 if B contains same characters as that of given string A and in the same order else return 0.

For Example

Input 1:
    A = "HIRED" 
    B = "HHHIIIRRRRREEEEEDDDDD"
Output 1:
    1

Input 2:
    A = "HIRED"
    B = "DDHHHHIIIIRRRRREEEEDDD"
Output 2:
    0

'''

def letters(A):
    letter_list = list()
    letter_list.append(A[0])
    for i in range(len(A)-1):
        if(A[i+1]!=A[i]):
            letter_list.append(A[i+1])
    return(letter_list)

class Solution:
    # @param A : string
    # @param B : string
    # @return an integer
    def solve(self, A, B):
        B_letter_list = letters(B)
        A_letter_list = list(A)
        if(A_letter_list==B_letter_list):
            return(1)
        return(0)
