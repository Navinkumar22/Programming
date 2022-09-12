'''
Replace Vowels by Consonants and Vice versa
The program must accept a string S as the input.
The program must replace every vowel in the string S by the next consonant
(alphabetical order) and replace every consonant in the string S by the next
vowel (alphabetical order). Finally, the program must print the modified string as the output.
Note: All the alphabets in the string S must be in lower case.
Boundary Condition(s): 1 <= Length of S <= 100
Input Format: The first line contains the value of string S.
Output Format: The first line contains the modified string.

Example Input/Output 1:
Input: orange
Output: puboif

Example Input/Output 2:
Input: mergesort
Output: ofuifupuu
'''

#Program

a=input().strip() 
b="aeiou"
c="abcdefghijklmnopqrstuvwxyz" 
for i in a:
    t=0 
    if i in b:
        print(c[c.index(i) +1], end='')
    else:
        t=c.index(i) 
        while(1): 
            if c[t] in b:
                print(c[t], end='')
                break 
            if t==25: 
                t=-1 
            t+=1
            
