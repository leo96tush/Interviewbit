/*
N integers containing only 1,2 and 3

Given an integer A. Find and Return first positive A integers in ascending order containing only digits 1,2 and 3.

NOTE: all the A integers will fit in 32 bit integer.


Input Format

The only argument given is integer A.

Output Format

Find and Return first positive A integers in ascending order containing only digits 1,2 and 3.

Constraints

1 <= A <= 29500

For Example

Input 1:
    A = 3
Output 1:
    [1, 2, 3]

Input 2:
    A = 7
Output 2:
    [1, 2, 3, 11, 12, 13, 21]

*/

string current(int j){
    return to_string(1+(j%3));
}

vector<int> Solution::solve(int A) {
    vector<int> myvector;
    if(A==0){
        return myvector;
    }
    if(A==1){
        myvector.push_back(1);
        return myvector;
    }
    if(A==2){
        myvector.push_back(1);
        myvector.push_back(2);
        return myvector;
    }
    if(A==3){
        myvector.push_back(1);
        myvector.push_back(2);
        myvector.push_back(3);
        return myvector;
    }
    else{
        myvector.push_back(1);
        myvector.push_back(2);
        myvector.push_back(3);
        A = A-3;
        int i=0,j=0;
        while(A){
            int p = myvector[i];
            string s1,s2;
            s1 = to_string(p);
            s2 = current(j);
            myvector.push_back(stoi(s1.append(s2)));
            j++;
            if(j>2){
                i++;
                j=j-3;
            }
            A--;
        }
        return myvector;
    }
    
}
