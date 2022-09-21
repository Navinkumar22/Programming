'''
Fibonacci Series in Reverse Order
The program must accept an integer N as the input.
The program must print the fibonacci series in the reverse order as the output.
Boundary Condition(s): 5 <= N <= 85
Input Format: The first line contains the value of N.
Output Format: The first line contains the fibonacci series separated by a space.

Example Input/Output 1:
Input: 5
Output: 3 2 1 1 0

Example Input/Output 2:
Input: 12
Output: 89 55 34 21 13 8 5 3 2 1 1 0
'''
#Program
a=int(input())
b=0
c=0
d=1
out=[]
while(a>0):
    a-=1
    out.insert(0,b)
    c=d
    d=b
    b=c+d

print(*out)
