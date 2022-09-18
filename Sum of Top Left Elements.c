/*
Sum of Top Left Elements 
The program must accept an integer matrix of size RxC as the input.
The program must print the sum of top left quadrant elements as the output. 
Boundary Condition(s): 1 <= R, C <= 99 
Input Format: The first line contains the integer values R and C separated by space(s). 
The next R lines contain C integers each separated by space.
Output Format: The first line contains the sum of top left quadrant elements.

Example Input/Output 1:
Input: 
4 4 
1 2 3 4
5 6 7 8 
9 1 2 3 
4 5 6 7 
Output: 14 

Explanation: The top left elements are 1, 2, 5 and 6.
The sum of top left elements are 14 (1 + 2 + 5 + 6). 
So, 14 is printed as the output. 

Example Input/Output 2: 
Input: 
5 3 
1 2 3 
4 5 6 
7 8 9 
1 2 3 
4 5 6 
Output: 27 

Explanation: The top left elements are 1, 2, 4, 5, 7 and 8. 
The sum of top left elements are 27 (1 + 2 + 4 + 5 + 7 + 8). 
So, 27 is printed as the output.
*/

//PROGRAM 

#include<stdio.h> 
#include<stdlib.h>
int main(){
	int a,b,t; 
	scanf("%d %d",&a,&b); 
	int sum=0; 
	int x=a/2,y=b/2; 
	if(a%2!=0)x=(a/2)+1;
	if(b%2!=0)y=(b/2)+1;
	for(int i=0;i<a;i++){ 
		for(int j=0; j<b;j++){
			scanf("%d",&t); 
			if(i<x && j<y) {
				sum+=t;
			}
		}
	}
	printf("%d", sum);
}