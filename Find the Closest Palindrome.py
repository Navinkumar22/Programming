'''
Find the Closest Palindrome 

The program must accept a number N as the input. 
The program must print the closest palindromic number as the output. 
If there are two closest palindromic numbers the program must print the smaller number. 

Boundary Condition(s): 
2 <= N <= 99999999999999 

Input Format: 
The first line contains the value of N. 
Output Format: 
The first line contains the closest palindromic number. 

Example Input/Output 1: 
Input: 124 
Output: 121 

Example Input/Output 2: 
Input: 1439 
Output: 1441
                        

'''
#Program

a=int(input()) 
count_positive, count_negative, t=0,0,a, 
while(str(t)!=str(t)[::-1]):
    t+=1
    count_positive+=1 
while(str(a)!=str(a)[::-1]):
    a-=1
    count_negative+=1 
if count_negative<count_positive:
    print(a) 
elif count_negative> count_positive:
    print(t) 
else:
    print(a)