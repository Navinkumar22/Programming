'''
Toggle Vowel
A string S containing only alphabets is passed as the input to the program.
The program must toggle the case of vowels at odd positions and print the string.
Boundary Condition(s): 1 <= Length of S <= 1000
Input Format: The first line contains the String S.
Output Format: The first line contains the string with vowels toggled at the odd positions.

Example Input/Output 1:
Input:
cool
Ouput: coOl

Explanation : vowel 'o' in 3rd position is toggled.

Example Input/Output 2:
Input: URANIUM
Ouput: uRaNiUM
Explanation : vowels 'U' is in 1st , 'A' is in 3rd and 'I' is in 5th positions are toggled.
'''

#Program

out=""
a=input().strip() 
b="aeiouAEIOU" 
for i in range(len(a)): 
    if (i+1)%2!=0 and a[i] in b:
        if a[i].islower():
            out+=a[i].upper() 
        else:
            out+=a[i].lower() 
    else:
        out+=a[i]
print(out)
