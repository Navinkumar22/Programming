'''
Pattern Printing with Two Characters
The program must accept an integer N and two characters as input.
The program must print the desired pattern as shown in the Example Input/Output section.
Boundary Condition(s): 1 <= N <= 50
Input Format: The first line contains the value of N followed by a space and then the
two characters(without any space between the two characters).
Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
Input: 5 $#
Output:
    $
    #$#
    $#$#$
    #$#$#$#
    $#$#$#$#$

Example Input/Output 2:
Input: 6 @%
Output:
    @
    %@%
    @%@%@
    %@%@%@%
    @%@%@%@%@
    %@%@%@%@%@%
'''

#PROGRAM
a,b=map(str,input().split())
b1=b[0]
b2=b[1]
a=int(a)
k=1;f=0
for i in range(a):
    for j in range(k):
        if f==0:
            print(b1,end='')
            f=1
        else:
            f=0
            print(b2,end='')
    print()
    k+=2
