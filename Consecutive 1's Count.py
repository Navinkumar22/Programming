'''
Consecutive 1's Count
The program must accept a matrix of size RxC as input.
The program must print the count of consecutive 1's column-wise as the output.
Boundary Condition(s): 1 <= R, C <= 100
Input Format: The first line contains the value of R and C.
The next R lines contain C integers (0's and 1's) separated by space.
Output Format: The first line contains the count of consecutive 1's column-wise.

Example Input/Output 1:
Input:
5 4
1 0 1 1
1 0 0 1
0 1 1 1
1 0 0 0
1 1 1 1
Output: 3
Explanation: In the first column, there are two consecutive 1's.
In the last column, there is one consecutive 1's.
Hence the output is 3.

Example Input/Output 2:
Input:
5 6
0 0 1 1 0 1
0 0 1 0 0 1
0 1 1 1 0 0
0 1 0 0 1 1
0 0 0 0 0 1
Output: 4
'''

#Program

s,f=0,0 
a,b=map(int, input().split())
c=[list(map(int, input().split())) for i in range(a)]
d=[]
for i in range(b):
    t=[] 
    for j in range(a):
        t.append(c[j][i])
    d.append(t)
for i in range(b): 
    for j in range(a-1): 
        if d[i][j]==1 and d[i][j+1]==1: 
            f=1 
        elif f==1:
            s+=1
            f=0 
    if f==1:
        s+=1
        f=0
print(s)
