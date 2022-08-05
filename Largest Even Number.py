'''

Largest Even Number 

The program must accept two numbers N1 and N2 as the input 
and it must print the largest possible even number with non-zero unit digit 
as the output containing all the digits from both the numbers. 
If an even number with non-zero unit digit cannot be formed using the digits from the two numbers, 
the program must print -1 as the output. Note: The last digit must not be zero. 

Boundary Condition(s): 

1 <= N1, N2 <= 99999999 

Input Format: 
The first line contains the value of N1 and N2 separated by space. 

Output Format: 
The first line contains the largest possible even number. 

Example Input/Output 1: 

Input: 
784201 86976 

Output: 98877664102 

Explanation: The largest possible even number obtained from both the numbers N1 and N2 is 98877664120. 
As the last digit must not be zero, the smallest non-zero digit is made as the last digit. 
So, the output is 98877664102. 

Example Input/Output 2: 

Input: 9 3 

Output: -1
'''

#Program

a,b=map(int,input().split())

List=[]
while a>0:
    List.append(a%10)
    a//=10 
while b>0:
    List.append(b%10) 
    b//=10
    
count=[0 for i in range (10)]

for i in range(10):
    count[i]+=List.count(i)
if count[2]==0 and count[4]==0 and count[6]==0 and count[8]==0:
    print(-1) 
    exit()

out=""
t=""
List.sort() 

for i in range(len(List)): 
    if List[i]%2==0 and List[i]!=0:
        out+=str(List[i]) 
        del List[i] 
        break 

for i in range(len(List)-1,-1,-1):
    t+=str(List[i])

print(t+out)


