'''

Count of Closed Walk - 
Matrix The program must accept an integer matrix of size MxM and an integer N 
representing the size of NxN submatrix as input. The program must print the count 
of NxN submatrices in the MxM matrix whose border elements are even integers. 

Boundary Condition(s): 
3 <= M <= 50 
2 <= N <= M 
Input Format: The first line contains the values of M and N. 
The next M lines contain M integers each separated by space(s). 
Output Format: The first line contains the count of the NxN submatrices in the MxM matrix whose border elements are even integers. 
Example Input/Output 1: 
Input: 
5 3 
2 1 2 2 2
2 2 4 4 2 
6 4 6 6 2 
2 2 2 1 1 
2 3 1 1 1 

Output: 2 

Explanation: Two sub matrices with all border even elements of size 3x3 are 2 2 2 4 4 2 6 6 2 
and 2 2 4 6 4 6 2 2 2 

Example Input/Output 2: 
Input: 
4 2 
1 2 30 41 
10 12 14 16
8 62 40 66 
2 22 31 6 

Output: 5

'''

a,b=map(int,input().split())
c=[[int(i) for i in input().split()] for j in range(a)] 
out=0 
for i in range(a):
    for j in range(a):
        if i+b<=a and j+b<=a:
            f=0
            for k in range(i,i+b): 
                for l in range(j,j+b): 
                    if c[k][l]%2!=0 and(k==i+b-1 or l==j+b-1 or k==i or l==j): 
                        f=1
                        break 
            if f==0:
                out+=1
print(out)
