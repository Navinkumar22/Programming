/*
Inverted V Pattern 
The program must accept the values of string S1 and S2 as input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= Length of S1, S2 <= 100 
Input Format: The first line contains the value of string S1. The second line contains the value of string S2. 
Output Format: The list of lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 
orange 
energy 
Output: 
-----e 
----g-n 
---n---e 
--a-----r 
-r-------g 
o---------y 

Example Input/Output 2: 

Input: 
apple 
orange 
Output: -1 

Example Input/Output 3: 
Input: 
neuro 
lemon 
Output: 
----n 
---o-e 
--m---u 
-e-----r 
l-------o
*/

//PROGRAM

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>
 
int main(){
	char ar1[101], ar2[101]; 
	int a,b; 
	scanf("%s\n%s", ar1, ar2); 
	a=strlen(ar1); 
	b=strlen(ar2); 
	if(ar1[0]==ar2[b-1]){
		char t[101]; 
		strcpy(t,ar1); 
		strcpy(ar1, ar2);
		strcpy(ar2,t); 
		int d=a; 
		a=b;
		b=d;
	}else if(ar2[0]!=ar1[a-1]){
		printf("-1"); 
		return 0;
	}
	int x=a,y=a-1; 
	for(int i=0;i<a;i++){ 
		for(int j=0;j<x;j++){ 
			if(i+j==a-1){
				printf("%c", ar1[y--]);
			}else if(j==x-1){
				printf("%c", ar2[i]); 
			}else{
				printf("-");
			}
		}
		x++; 
		printf("\n");
	}
}