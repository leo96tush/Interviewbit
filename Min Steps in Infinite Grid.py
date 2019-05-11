class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @return an integer
    def coverPoints(self, A, B):
        number_of_steps = 0
        for i in range(len(A)-1):
            number_of_steps = number_of_steps+max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]))
        return(number_of_steps)
