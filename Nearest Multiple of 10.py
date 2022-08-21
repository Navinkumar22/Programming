'''
Nearest Multiple of 10 
The program must accept an integer N as the input. 
The program must print the nearest multiple of 10 as the output. 
Note: If the value of N has two nearest multiples, then the smaller multiple should be printed as the output. 
Boundary Condition(s): 
10 <= N <= 999999999 
Input Format: The first line contains the value of N. 
Output Format: The first line contains the nearest multiple of 10. 

Example Input/Output 1: 
Input: 551 
Output: 550 

Example Input/Output 2: 
Input: 9999999 
Output: 10000000
'''

# Program

a=int(input());b=a 
if a%10==0:
	print(a)
	quit()
while(1):
	a+=1;b-=1 
	if a%10==0 and b%10==0:
		print(a)
		quit() 
	elif b%10==0:
		print(b)
		quit() 
	elif a%10==0:
		print(a) 
		quit()