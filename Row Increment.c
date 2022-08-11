/*
Row Increment 
Last Element Unit Digit The program must accept an integer matrix of size R*C as input. 
Then the elements in a given row must be incremented by the value of the unit digit of the last element in that specific row. 
Finally the program must print the revised matrix values. 
Boundary Condition(s): 
1 <= R, C <= 100 
Input Format: The first line contains the value of R and C separated by space(s). 
The next R lines contain C integers separated by space. 
Output Format: R lines each containing C integers modified as per the given conditions. 

Example Input/Output 1: 
Input: 
3 4 
10 12 13 15
23 88 12 42 
99 89 79 11 

Output: 
15 17 18 20 
25 90 14 44 
100 90 80 12
*/

// Program

#include<stdio.h> 
#include<stdlib.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b); 
	int mat[a][b]; 
	for(int i=0;i<a;i++){ 
		for(int j=0;j<b;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<a;i++){
		int x=(mat[i][b-1])%10; 
		for(int j=0;j<b;j++){
			printf("%d ", mat[i][j]+x); 
		}printf("\n");
	}
}