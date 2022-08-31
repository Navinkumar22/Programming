/*
Count of Longest Consecutive 1's
The program must accept an integer N as the input. 
The program must print the count of longest consecutive 1's in the binary representation of N as the output. 

Boundary Condition(s): 1 <= N <= 99999999 

Input Format: The first line contains the integer value of N. 
Output Format: The first line contains the count of longest consecutive 1's in the binary representation of N. 

Example Input/Output 1: 
Input: 55
Output: 3 
Explanation: The binary representation of 55 is 110111. The first two bits and the last three bits are consecutive 1's. 
The count of the longest consecutive 1's is 3. Hence, 3 is printed as the output.

Example Input/Output 2: 
Input: 1468 
Output: 4

*/

//program

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a; 
	scanf("%d",&a); 
	int k=0, m=0; 
	while(a) {
		if (a%2==0 && k>0){
			if(m<k){
				m=k;
			}
			k=0;
		}else if(a%2==1) {
			k++;
		}
		a/=2;
	}
	if(k>0 && m<k)m=k;
	printf("%d ",m);
}