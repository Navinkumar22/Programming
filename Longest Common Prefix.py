'''

Longest Common Prefix 
The program must accept N string values as input. 
The program must print the longest common prefix string among N string values as the output. 
If there is no common prefix string then the program must print -1 as the output. 
Boundary Condition(s): 
2 <= N <= 1000 
1 <= Length of each string <= 100 
Input Format: The first line contains the value of N. 
The next N lines contain a string in each line. 
Output Format: The first line contains either the longest common prefix string among N string values or -1. 

Example Input/Output 1: 
Input: 
4 
encages 
encrypt 
envelop 
environment 

Output: en 

Explanation: 
encages 
encrypt 
envelop 
environment 
The longest common prefix string is en. 
Hence the output is en 

Example Input/Output 2: 
Input: 
3 
flower 
lower 
flyover 

Output: -1

'''
#PROGRAM 
t=""
a=int(input())
b=[input().strip() for i in range(a)]

for i in range (len(b[0])):
    t+=b[0][i] 
    if t[-1]!=b[1][i]:
        t=t[:len(t)-1]
        break 
    
for i in range(1,len(t)+1):
    for j in range(len(b)): 
        if t[:i]!=b[j][:i]:
            t=t[:i-1] 

if len(t)>0:
    print(t)
else:
    print(-1)


