""
Even Odd Encryption
It is not safe to send the data from one place to the other directly because hackers are always ready to steal the data and misuse it. So in order to send the data encryption is performed. Given the data in the form of a string of lower case English alphabets and an encryption key B, perform encryption based on the following algorithm: For every character of the string if its frequency is even then increase the value the character B times else decrease the value of the character B times. Note: Increment and decrement are in cyclic fashion i.e. z is followed by a. For example, if the character is ‘a’ then increasing it by 1 will make it ‘b’, increasing by 2 will make it ‘c’, increasing it by 26 will make it ‘a’ again, decreasing it by 1 will make it ‘z’ and so on. 
Input Format
The first argument given is the String A.
The second argument given is the Integer B.
Output Format
Return the encrypted string.
Constraints
1 <= length of input string <= 100000
1 <= B <= 256
For Example
Input 1:
    A = abccba
    B = 2
Output 1:
    cdeedc

Input 2:
    A = wvmctuj
    B = 28
Output 2:
    utkarsh
""

def result(A,B):
    B = B%26
    A_list = list(A)
    count_array = [0]*26
    for i in range(len(A_list)):
        count_array[ord(A_list[i])-97]=1+count_array[ord(A_list[i])-97]
    
    for i in range(len(A_list)):
        if(count_array[ord(A_list[i])-97]%2==0):
            if(ord(A_list[i])+B>ord('z')):
                A_list[i] = chr(ord('a')+ord(A_list[i])+B-ord('z')-1)
                #print(A_list[i])
            else:
                A_list[i] = chr(ord(A_list[i])+B)
                #print(A_list[i])
        else:
            if(ord(A_list[i])-B<ord('a')):
                A_list[i] = chr(1+ord('z')-(ord('a')-(ord(A_list[i])-B)))
                #print(A_list[i])
            else:
                A_list[i] = chr(ord(A_list[i])-B)
                #print(A_list[i])
    str = ""
    return(str.join(A_list))
        
class Solution:
    # @param A : string
    # @param B : integer
    # @return a strings
    
    def solve(self, A, B):
        return(result(A,B))
