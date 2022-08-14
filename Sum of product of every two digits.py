'''

Sum of product of every two digits 
The program must accept an integer N as the input. 
The program must print the sum of the product of every two digits in the integer N. 
Note: If a two digit number is not formed in the last part of the integer N, then consider only the last digit.
Boundary Condition(s): 1 <= N <= 10^17 
Input Format: The first line contains the value of N. 
Output Format: The first line contains the sum of the product of every two digits in the integer N. 

Example Input/Output 1: 

Input: 1234567 
Output: 800 

Explanation: 
12*34 + 56*7 -> 408+392 -> 800 

Example Input/Output 2: 

Input: 120014 
Output: 14 

Explanation: 
12*0 + 14 -> 0+14 -> 14

'''


a=input().strip() 
b=[]
t=""
out=0

for i in range(len(a)):
    t+=a[i] 
    if (i+1)%2==0:
        b.append(int(t))
        t="" 
if len(t)>0:
    b.append(int(t))

l=0
if len(b)%2!=0:
    l=len(b)-1
    out+=b[l] 
else:
    l=len(b)

for i in range(0,l,2):
    out+=(b[i]*b[i+1]) 
print(out)