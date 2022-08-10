/*

Accept an integer matrix of size N*N. 
The program must print the bottom right quadrant in the matrix as the output. 
Boundary Condition(s): 
1 <= N <= 50 

Input Format: 
The first line contains the integer value of N. 
The next N lines contain N integers separated by space(s). 

Output Format: 
The list of lines contain the bottom right quadrant integers each separated by space. 

Example Input/Output 1: 
Input: 
4 
1 2 0 9 
8 3 4 2 
1 0 1 6 
5 6 2 9 

Output: 
1 6 
2 9 
Example Input/Output 2: 
Input: 
3 
1 2 4
9 8 21 
0 11 2 

Output: 
8 21 
11 2
*/

// PROGRAM 

#include<stdio.h> 
#include<stdlib.h>
int main(){
	int a;
	scanf("%d",&a);
	int ar[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	for(int i=a/2;i<a;i++){
		for(int j=a/2;j<a;j++){
			printf("%d ",ar[i][j]);
		}printf("\n");
	}
}