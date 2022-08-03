'''
Pattern Printing N Values with Asterisk 
Accept an integer N as the input. 
The program must print the pattern as shown in the 
Example Input/Output section below. 
Boundary Condition(s): 
1 <= N <= 50 
Input Format: 
The first line contains the value of N. 
Output Format: 
The first three lines contain the desired pattern. 

Example Input/Output 1: 

Input: 3 

Output:
******* 
*1*2*3* 
******* 

Example Input/Output 2: 

Input: 5 

Output: 
*********** 
*1*2*3*4*5* 
***********
'''
# Program:
a=int(input()) 
c=1 
b=(a*2)+1 
print("*"*b) 
for j in range(b): 
    if (j+1)%2==0:
        print(c, end='')
        c+=1 
    else:
        print("*", end='') 
print() 
print("*"*b)