/*
Longest Common Prefix
Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array. Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2. For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc". 
Input Format
The only argument given is an array of strings A.
Output Format
Return longest common prefix of all strings in A.
For Example
Input 1:
    A = ["abcdefgh", "aefghijk", "abcefgh"]
Output 1:
    "a"
    Explanation 1:
        Longest common prefix of all the strings is "a".

Input 2:
    A = ["abab", "ab", "abcd"];
Output 2:
    "ab"
    Explanation 2:
        Longest common prefix of all the strings is "ab".
*/

int minimum(int a,int b){
    if(a<=b){
        return a;
    }
    else{
        return b;
    }
}
string common_prefix(string a,string b){
    string common_string;
    int length_string1 = a.length();
    int length_string2 = b.length();
    int smaller_length = minimum(length_string1,length_string2);
    for(int i=0;i<smaller_length;i++){
        if(a[i]==b[i]){
            common_string.push_back(a[i]);
        }
        else{
            break;
        }
    }
    return(common_string);
}
string Solution::longestCommonPrefix(vector<string> &A) {
    string common_prefix_string;
    common_prefix_string = A[0];
    for(int i=1;i<A.size();i++){
        common_prefix_string = common_prefix(common_prefix_string,A[i]);
    }
    return(common_prefix_string);
}
