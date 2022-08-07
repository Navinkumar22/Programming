'''

The program must accept a pattern P as a string and another string S as input. 
The program must print the words in S which are similar to the given pattern P and of the same length as P. 
The word is said to be similar to the pattern if the occurrence count of character matches. 
If there is no word following the pattern P, then print -1 as the output. 

Boundary Condition(s): 

2 <= The length of P <= 99 
1 <= The length of S <= 10000 

Input Format: 
The first line contains a pattern P. 
The second line contains a string S. 

Output Format: 
The first line contains either the matching word(s) or -1. 

Example Input/Output 1: 
Input: 
rrhjkrrr 
mmghieee hrrjkrrr akasjd kkalixxx acd 

Output: mmghieee kkalixxx 

Explanation: 
The given pattern contains two 'r', one 'h', one 'j', one 'k' and three 'r'. 
The first word contains two 'm', one 'g', one 'h', one 'i' and three 'e', which is similar to the given pattern. 
Thus the first word is printed. 
The second word contains one 'h', two 'r', one 'j', one 'k' and three 'r', 
which is not similar to the pattern. The third word contains one 'a', one 'k', one 'a', one 's', one 'j' and one 'd', 
which is not similar to the pattern. The fourth word contains two 'k', one 'a', one 'l', one 'i' and three 'x', 
which is similar to the given pattern. Thus the fourth word is printed. The fifth word contains one 'a', one 'c' and one 'd', 
which is not similar to the pattern. 

Example Input/Output 2: 

Input: 
apple 
mango orange 

Output: -1
'''

def encodeString(Str):
    map = {}
    res = ""
    i = 0
    for ch in Str:
        if ch not in map:
            map[ch] = i
            i += 1
        res += str(map[ch])
    return res

def findMatchedWords(dict, pattern):
    Len = len(pattern)
    f=0
    hash = encodeString(pattern)
    for word in dict:
 
        if(len(word) == Len and
           encodeString(word) == hash):
            print(word, end = " ")
            f=1
    if f==0:
        print(-1)
pattern=input().strip()
dict =input().split()

findMatchedWords(dict, pattern)