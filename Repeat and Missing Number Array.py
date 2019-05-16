class Solution:
    # @param A : tuple of integers
    # @return a list of integers
    def repeatedNumber(self, A):
        size = len(A) + 1
        count = [0] * size

        for val in A:
            count[val] += 1

            res1 = 0
            res2 = 0

        for idx, val in enumerate(count):
            if val == 2:
                res1 = idx
            if val == 0:
                res2 = idx

        return res1, res2
