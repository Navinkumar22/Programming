'''
Diagonal Suffix Sum
The program must accept an integer matrix of size NxN as input.
The program must print the sum of all the suffixes of the diagonal.
Boundary Condition(s): 2 <= N <= 50
Input Format: The first line contains the value of N.
The next N lines contain N integers each separated by space(s).
Output Format: The first two lines contain N integers each separated by a space.

Example Input/Output 1:
Input:
    3
    5 1 6
    4 2 9
    8 7 3
Output:
    16 10 8
    10 5 3

Explanation:
    The main diagonal sum -> 5+2+3 -> 10 The first suffix sum
    of the main diagonal -> 2+3 -> 5 The second suffix sum of
    the main diagonal -> 3 Total -> 10+5+3 -> 18 The opposite
    diagonal sum -> 6+2+8 -> 16 The first suffix sum of
    the opposite diagonal-> 2+8 -> 10 The second suffix sum of
    the opposite diagonal -> 8 Total -> 16+10+8 ->34 Since 34 > 18
    the opposite diagonal sum and their suffixes sum are printed in
    the first line and the main diagonal sum and their suffixes sum
    are printed in the second line

Example Input/Output 2:
Input:
    4
    54 86 35 71
    78 32 85 62
    69 84 66 45
    37 79 73 30

Output:
    277 206 121 37
    182 128 96 30
'''
md, ad=0,0 
a=int(input()) 
b=[list(map(int,input().split())) for i in range(a)]
for i in range(a): 
    for j in range(a): 
        if i==j:
            md+=b[i][j] 
        if i+j==a-1:
            ad+=b[i][j] 
List1=[md] 
List2=[ad] 
for i in range(a): 
    for j in range(a): 
        if i==j:
            md-=b[i][j]
            List1.append(md) 
        if i+j==a-1:
            ad-=b[i][j]
            List2.append(ad) 
if sum(List2)>sum(List1):
    print(*List2[:-1])
    print(*List1[:-1]) 
else:
    print(*List1[:-1]) 
    print(*List2[:-1])

