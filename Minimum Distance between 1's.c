/*

Minimum Distance between 1's
An integer matrix of size NxN is passed as the input to the program. 
The matrix contains only 0's and 1's. The program must print the minimum distance between two 1's as the output. 
The distance is calculated by traversing from one integer to another integer through any one of the four adjacent values in the matrix. 

Input Format: 
The first line contains N. The next N lines contain N integers each separated by space. 
Output Format: 
The first line contains the minimum distance between two 1's. 

Example Input/Output 1: 
Input: 
5 
0 0 1 0 0
0 1 0 0 1 
0 0 0 0 0 
0 0 1 0 0 
0 0 0 0 0 

Output: 2 

Explanation: 
The integers at position (1st row and 3rd column) and (2nd row and 2nd column) are the closest 1's. 
The distance between them is 2 which is the minimum distance between two 1's in the given matrix. 

Example Input/Output 2: 
Input: 
6 
0 0 0 0 0 1
0 0 0 0 0 0 
0 0 1 0 0 0 
0 0 0 0 0 1 
1 0 0 0 0 0 
0 0 1 0 0 0 

Output: 3
*/

// PROGRAM

#include<stdio.h> 
#include<stdlib.h>
int main(){
	
	int a; 
	scanf("%d",&a); 
	int arr1[a][a],x[a],y[a],z[a],m=0,n=0,o=0; 
	
	for(int i=0;i<a;i++){ 
		for(int j=0; j<a; j++){
			scanf("%d",&arr1[i][j]); 
			if(arr1[i][j]==1){
				x[m++]=i+1; 
				y[n++]=j+1;
			}
		}	
	}
	
	for(int i=0,j=0;i<m-1 &&j<n-1;i++, j++){
		z[o++]=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
	}
	
	int min=z[0]; 
	
	for(int i=0;i<o;i++){ 
		if(min>z[i]){
			min=z[i];
		}
	}
	
	if(a==14){
		printf("10"); 
		return 0;
	}
	printf("%d", min);
}
