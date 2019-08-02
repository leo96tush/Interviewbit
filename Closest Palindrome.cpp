/*
Closest Palindrome
Groot has a profound love for palindrome which is why he keeps fooling around with strings. But not all strings are palindromes. Since Groot is lazy, he wants to know if it is possible to make any string a palindrome by changing exactly one of its characters. Constraints:
1.   1 <= Length of S <= 100000
2.   All the alphabets of S are lower case (a - z)
Input: A string S. Output: Your function should return the string "YES" if it is possible to make the given string a palindrome by changing exactly 1 character. Else, it should return the string "NO". Example: Input:
abbba
Function return:
YES
*/
string palindrome_check(string a){
    int n = a.length(),count=0;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-i-1]){
                count++;
            }
        }
        if(count==1){
            return("YES");
        }
        else{
            return("NO");
        }
    }
    else{
        for(int i=0;i<1+n/2;i++){
            if(a[i]!=a[n-i-1]){
                count++;
            }
        }
        if(count==1 or count==0){
            return("YES");
        }
        else{
            return("NO");
        }
    }
}
string Solution::solve(string A) {
    return(palindrome_check(A));
}
