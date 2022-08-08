'''

Consecutive Digits 
The program accepts an integer N as the input. 
All the digits in the number must be repeated consecutively. 
If a digit is not repeated consecutively, the program must repeat it for two times. 
Finally, the program must print the modified integer value. 
Boundary Condition(s): 
1 <= N <= 10^13 
Input Format: The first line contains the value of N. 
Output Format: The first line contains the modified integer value. 

Example Input/Output 1: 
Input: 1223 
Output: 112233 
Explanation: 1 and 3 are not repeated consecutively. 
So consider 1 and 3 as 11 and 33. 
Hence the output is 112233. 

Example Input/Output 2: 
Input: 998888745551 
Output: 998888774455511

'''
#Program

out="" 
List=[] 
a=input().strip() 
for i in range (len(a)):
    out+=a[i] 
    if i==len(a)-1: 
        List.append(out)
        out="" 
    elif a[i] !=a[i+1]:
        List.append(out)
        out="" 
        
for i in List:
    if len(i)==1:
        out+=(i+i) 
    else:
        out+=i 
print(out)
