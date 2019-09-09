/*
Longest Consecutive Sequence

Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

Example: Given [100, 4, 200, 1, 3, 2], The longest consecutive elements sequence is [1, 2, 3, 4]. Return its length: 4.

Your algorithm should run in O(n) complexity.
*/


int max(int a , int b){
    if(a>=b){
        return a;
    }
    return b;
}

int Solution::longestConsecutive(const vector<int> &A) {
    set<int> s;
    int result = 0 ;
    for(int i=0 ; i<A.size() ; i++){
        s.insert(A[i]);
    }
    
    while(s.size()>=1){
        int count = 1;
        int a = *s.begin();
        int up = a+1;
        int down = a-1;
        //cout << up << " " << down << endl;
        while(s.count(up)==true){
            s.erase(up);
            up++;
            count++;
        }
        
        while(s.count(down)==true){
            s.erase(down);
            down--;
            count++;
        }
        s.erase(a);
        result = max(result,count);
    }
    return result;
}
