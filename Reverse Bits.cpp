/*
Reverse Bits

Reverse bits of an 32 bit unsigned integer

Example 1:

x = 0,

          00000000000000000000000000000000  
=>        00000000000000000000000000000000

return 0

Example 2:

x = 3,

          00000000000000000000000000000011 
=>        11000000000000000000000000000000

return 3221225472

Since java does not have unsigned int, use long
×
-->

*/

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned long long int B=0;
    unsigned int arr[32]={0},i=0;
    while(A){
        arr[i]=A%2;
        A=A/2;
        i++;
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        B+=pow(2,31-i)*arr[i];
    }
    return(B);
}
