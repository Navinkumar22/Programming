'''

Series - Digit at Nth Position 
The program must accept two integer values M and N as input. 
The program must generate a series of integers from 1 to M and print the digit at the Nth position in the series. 
Boundary Condition(s): 
1 <= M <= 120 
1 <= N <= Length of the series 
Input Format: The first line contains the integer values M and N separated by a space. 
Output Format: The first line contains the digit at the Nth position in the generated series. 

Example Input/Output 1: 
Input: 55 30 
Output: 2 
Explanation: 
The series from 1 to 55 is 12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455 
30th position contains 2 

Example Input/Output 2: 
Input: 10 3 
Output: 3

'''
#Program
a,b=map(int,input().split())
String=""
for i in range(1,a+1):
    String+=str(i)
print(String[b-1])
