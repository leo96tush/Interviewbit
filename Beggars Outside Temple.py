'''Beggars Outside Temple

There are N (N > 0) beggars sitting in a row outside a temple. Each beggar initially has an empty pot. When the devotees come to the temple, they donate some amount of coins to these beggars. Each devotee gives a fixed amount of coin(according to his faith and ability) to some K beggars sitting next to each other.

Given the amount donated by each devotee to the beggars ranging from i to j index, where 1 <= i <= j <= N, find out the final amount of money in each beggar's pot at the end of the day, provided they don't fill their pots by any other means.'''

def solve(self, A, B):
        beg = [0]*A
        for p in B:
            a = p[0]
            b = p[1]
            k = p[2]
            for i in range(a-1,b):
                beg[i] = beg[i]+k
        return(beg)
