/*
Square Root of Integer

Implement int sqrt(int x).

Compute and return the square root of x.

If x is not a perfect square, return floor(sqrt(x))

Example :

Input : 11
Output : 3

DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY
*/
int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==0){
        return(0);
    }
    long long int low = 0;
    long long int high = A;
    while(low<=high){
        long long int mid; 
        mid = low + (high-low)/2;
        if(mid*mid<=A && (mid+1)*(mid+1)>A){
            return(mid);
        }
        else{
            if(mid*mid>A){
                high=mid-1;
            }
            else if(mid*mid<A){
                low=mid+1;
            }
        }
    }
}
                
                    
                
