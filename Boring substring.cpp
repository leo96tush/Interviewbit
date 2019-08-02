/*
Boring substring
Given a string A of lowercase English alphabets. Rearrange the characters of the given string A such that there is no boring substring in A. A boring substring has the following properties:
1. Its length is 2.
2. Both the characters are consecutive, for example - "ab", "cd", "dc", "zy" etc.
(If the first character is C then the next character can be either (C+1) or (C-1)).
Return 1 if it possible to rearrange the letters of A such that there are no boring substring in A, else return 0. 
Input Format
The only argument given is string A.
Output Format
Return 1 if it is possible to rearrange the letters of A such that there are no boring substrings in A, else return 0.
Constraints
1 <= |A| <= 100
For Example
Input 1:
    A = "abcd"
Output 1:
    1
    Explanation 1:
        String A can be rearranged into "cadb" or "bdac" 

Input 2:
    A = "aab"
Output 2:
    0
    Explanation 2:
        No arrangement of string A can make it free of boring substrings.
*/
int boring_string_check(string str){
    int string_length = str.length();
    for(int i=0;i<string_length-1;i++){
        if(abs(int(str[i])-int(str[i+1]))==1){
            return 0;
        }
    }
    return 1;
}

string odd_characters(string a){
    string odd_char_string;
    for(int i=0;i<a.length();i++){
        if(int(a[i])%2!=0){
            odd_char_string.push_back(a[i]);
        }
    }
    return(odd_char_string);
}

string even_characters(string a){
    string even_char_string;
    for(int i=0;i<a.length();i++){
        if(int(a[i])%2==0){
            even_char_string.push_back(a[i]);
        }
    }
    return(even_char_string);
}

int all_case_check(string a,string b){
    
    string final1,final2,final3,final4;
    final1 = a+b;
    if(boring_string_check(final1)==1){
        return 1;
    }
    reverse(a.begin(),a.end());
    final2 = a+b;
    if(boring_string_check(final2)==1){
        return 1;
    }
    reverse(b.begin(),b.end());
    final3 = a+b;
    if(boring_string_check(final3)==1){
        return 1;
    }
    reverse(b.begin(),b.end());
    final4 = a+b;
    if(boring_string_check(final4)==1){
        return 1;
    }
    return 0;
}
int Solution::solve(string A) {
    
    string even_string = even_characters(A);
    string odd_string = odd_characters(A);
    
    sort(odd_string.begin(),odd_string.end());
    sort(even_string.begin(),even_string.end());
    
    return(all_case_check(odd_string,even_string)) ;
}
