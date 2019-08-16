/*
Median of Array

There are two sorted arrays A and B of size m and n respectively.

Find the median of the two sorted arrays ( The median of the array formed by merging both the arrays ).

The overall run time complexity should be O(log (m+n)).

Sample Input

A : [1 4 5]
B : [2 3]

Sample Output

3

*/

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> C;
    int i=0,j=0;
    for(int k=0 ; k<A.size()+B.size()-1 ; k++){
        if(i!=A.size() && j!=B.size()){
            if(A[i]>=B[j]){
                C.push_back(B[j]);
                j++;
            }
            else{
                C.push_back(A[i]);
                i++;
            }
        }
        if(i==A.size()){
            C.push_back(B[j]);
            j++;
        }
        else if(j==B.size()){
            C.push_back(A[i]);
            i++;
        }
    }
    
    if(A.size()==0){
        if((B.size()%2)!=0){
            return(B[B.size()/2]);
        }
        else{
            return(0.5*(B[B.size()/2]+B[(B.size()/2)-1]));
        }
    }
    
    if(B.size()==0){
        if((A.size()%2)!=0){
            return(A[A.size()/2]);
        }
        else{
            return(0.5*(A[A.size()/2]+A[(A.size()/2)-1]));
        }
    }
    
    /*for(int i=0;i<C.size();i++){
        cout << C[i] << " ";
    }*/
    
    if((C.size()%2)!=0){
        return(C[C.size()/2]);
    }
    else{
        return((double)0.5*(C[C.size()/2]+C[(C.size()/2)-1]));
    }
}
