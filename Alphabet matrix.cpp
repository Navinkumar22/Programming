/*
Alphabet N*N Matrix 
The program must accept an alphabet CH and an integer N as the input. 
The program must print an NxN matrix starting from the alphabet CH in alphabetical order. 
If the alphabet 'z' is printed then the alphabet 'a' must be considered as the next alphabet. 
Assume the value of CH as lower case alphabet. 
Boundary Condition(s): 
1 <= N <= 1000 
Input Format: The first line contains the alphabet CH and integer N separated by space(s). 
Output Format: The first N lines contain N alphabets each separated by a space. 

Example Input/Output 1: 
Input: a 3 
Output: 
a b c 
d e f 
g h i 
Explanation: The starting alphabet is 'a' so matrix starts with 'a'. N is 3 so 3x3 matrix is printed. 

Example Input/Output 2: 
Input: x 4 
Output: 
x y z a 
b c d e 
f g h i 
j k l m
*/

//PROGRAM

#include<stdio.h> 
#include<stdlib.h>
int main(){
	int a; char b; 
	scanf("%c %d",&b,&a); 
	for(int i=0;i<a;i++) { 
		for(int j=0; j<a; j++){ 
			if(b==123) {
				b='a'; 
			}else if(b==91) {
				b='A';
			}
			printf("%c ", b++);
		}printf("\n");
	}
}