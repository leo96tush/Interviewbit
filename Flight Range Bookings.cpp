/*
Flight Range Bookings
Lets say, there is a company CorpFly which only takes booking from corporates. Lets say I have A flights and they are numbered from 1 to A. Most corporate bookings are of the following form (i, j, K). This implies book K seats each on every flight numbered between i and j (inclusive). Given a sequence of these bookings from corporates, your job is to tell the number of seats booked on each of the A flights. Note that CorpFly will not take bookings from any other means. In other words, you can assume the bookings mentioned here cover all the bookings for CorpFly. Constraints :
1 <= i <= j <= A
Assume the number of seats in every flight is infinite. 
1 <= A <= 10^5 ( Yes, CorpFly is huge ).
The number of corporate bookings would be less than 100000.
Example:
Input:
A = 5, B = [[1, 2, 10], [2, 3, 20], [2, 5, 25]]

Return: [10, 55, 45, 25, 25]

Explanation:
=> First booking books 10 seats on flights 1 to 2(1 and 2). Final bookings in each flight after first booking: [10, 10, 0, 0, 0]

=> Second booking books 20 seats on flights 2 to 3(2 and 3). Final bookings in each flight after second booking: [10, 30, 20, 0, 0]

=> Third booking books 25 seats on flights 2 to 5(2,3,4,5). Final bookings in each flight after third booking: [10, 55, 45, 25, 25]
*/
vector<int> result(int A,vector<vector<int>> &B){
    vector<int> fin_vec;
    for(int i=0 ; i<A ; i++){
        fin_vec.emplace_back(0);
    }
    
    
    for(int i=0 ; i<B.size() ; i++){
        int x = B[i][0]-1, y = B[i][1]-1 , z = B[i][2];
    
        fin_vec[x] += z;
        if(y+1<=fin_vec.size()-1){
            fin_vec[y+1] += -z;    
        }
    }
    
    
    
    
    for(int i=1 ; i<fin_vec.size() ; i++){
        fin_vec[i] = fin_vec[i-1]+fin_vec[i];
    }
    
    
    return fin_vec;
}

vector<int> Solution::solve(int A, vector<vector<int> > &B) {
    return result(A,B);
}
