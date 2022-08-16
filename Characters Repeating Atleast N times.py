'''
Characters Repeating Atleast N times 
The program must accept a string S and an integer N as input. 
The program must print the characters repeating consecutively at least N times as the output. 
Boundary Condition(s): 
2 <= Length of String S <= 100 
1 <= N <= 10 
Input Format: The first line contains the value of string S. 
The second line contains the value of N. 
Output Format: The first line contains the characters repeating consecutively at least N times. 

Example Input/Output 1: 
Input: 
aabccbhhhh 
2 
Output: ach 

Example Input/Output 2: 
Input: 
aaaabbcccbb 
3 
Output: ac

'''

a=input().strip() 
b=int(input()) 
List=[] 
t=a[0]
for i in range(1, len(a)):
    if a[i-1]!=a[i]:
        List.append(t)
        t=""
    t+=a[i] 
if len(t)>0:
    List.append(t)
    t=''
for i in List:
    if len(i)>=b:
        t+=i[0] 
print(t)
