'''

 The program must accept an integer matrix of size NxN and an integer X as input. 
 The program must print the Xth element while traversing the matrix spirally (clockwise direction). 
 
 Boundary Condition(s): 
 2 <= N <= 30 
 1 <= X <= 300 
 
 Input Format: 
 The first line contains the value of N and X separated by a space. 
 The next N lines contain N elements separated by space(s). 
 
 Output Format: The first line contains the Xth element while traversing the matrix spirally. 
 
 Example Input/Output 1: 
 
 Input: 
 5 6
 1 2 3 4 5 
 6 7 8 9 10 
 11 12 13 14 15
 16 17 18 19 20 
 21 22 23 24 25 
 
 Output: 10 
 
 Explanation: 
 The elements in spiral form of the matrix are 1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13. 
 The 6th element is 10. 
 Hence the output is 10 
 
 Example Input/Output 2: 
 
 Input: 
 4 16 
 21 22 23 24
 25 26 27 28 
 29 30 31 32 
 33 34 35 36 
 
 Output: 30
'''

a,b=map(int,input().split())
c= [[int(i) for i in input().split()]for j in range(a)]
x=0 
y=0 
re=[]
while x<a:
    for i in range(x,a):
        re.append(c[x][i])
    x+=1 
    for i in range(x,a):
        re.append(c[i][a-1])
    a-=1
    for i in range(a-1,y-1,-1):
        re.append(c[a][i])  
    for i in range(a-1,y,-1):
        re.append(c[i][y])
    y+=1 
print(re[b-1])