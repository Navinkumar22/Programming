'''

Matrix Side View 
The program must accept a character matrix of size R*C and a character X as input. 
If the character X is L or l, then the program must print the first alphabet in each row 
when traversing from left to right. Else if the character X is R or r, then the 
program must print the first alphabet in each row when traversing from right to left. 

Note: At least one alphabet will be present in each row. 

Boundary Condition(s): 
2 <= R, C <= 100 
Input Format: The first line contains the value of R and C separated by a space.
The next R lines contain C characters each separated by space(s). 
The R+2th line contains the character X. Output Format: The first line contains R characters. 

Example Input/Output 1: 
Input: 
4 6 
e - y - r k
- x i - - - 
- - - a t q 
- m - - p a 
L 
Output: exam 

Example Input/Output 2: 
Input: 
7 9 
u w w r - k b - - 
m q - h o c q i - 
- - g - - - - - - 
- v - v - b - - - 
h - x r - - s - o 
p - j b u g t - s 
e c - c s - - - - 
r 
Output: bigboss

'''

# Program

a,b=map(int,input().split())
c=[input().split() for i in range(a)] 
d=input() 
if d=='l' or d=='L': 
    for i in range(a): 
        for j in range(b): 
            if c[i][j].isalpha():
                print(c[i][j], end='')
                break 
elif (d=='r' or d=='R'):
    for i in range(a): 
        for j in range(b-1,-1,-1): 
            if c[i][j].isalpha():
                print(c[i][j], end='') 
                break
