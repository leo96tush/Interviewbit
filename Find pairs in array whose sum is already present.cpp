/*
Find pairs in array whose sum is already present
Given an array A of N distinct and positive elements, the task is to find number of unordered pairs whose sum already exists in given array. Expected Complexity : n^2 CONSTRAINTS
1 <= N <= 1000
1 <= A[i] <= 10^6 + 5
SAMPLE INPUT
A : [ 3, 4, 2, 6 ,7]
SAMPLE OUTPUT
2
EXPLANATION
The pairs following the conditions are : 
(2,4) = 6,
(3,4) = 7
*/
int Solution::solve(vector<int> &A) {
    vector<int> sumset;
    set<int> arrayset;
    int n = A.size();
    sort(A.begin(),A.end());
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            sumset.emplace_back(A[i]+A[j]);
        }
    }
    
    for(int i=0 ; i<A.size() ; i++){
        arrayset.emplace(A[i]);
    }
    int count=0;
    for(vector<int>::iterator itr=sumset.begin() ; itr!=sumset.end() ; ++itr){
        int x = *itr;
        if(arrayset.count(x)){
            count++;
        }
    }
    
    return count;
}
