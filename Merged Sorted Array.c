/*
Merged Sorted Array 
The program must accept two sorted arrays of size M and N as input. 
The program must print the merged sorted array as the output. 
Boundary Condition(s): 1 <= M, N <= 20 
Input Format: The first line contains the value of M and N separated by space. 
The second line contains the M elements separated by space(s). The third line contains the N elements separated by space(s). 
Output Format: The first line contains the merged sorted array separated by space(s). 

Example Input/Output 1: 
Input: 
4 3 
9 7 7 4
7 6 3 
Output: 
9 7 7 7 6 4 3 

Example Input/Output 2: 
Input: 
5 4 
12 11 10 9 8 
8 7 6 5 
Output : 12 11 10 9 8 8 7 6 5
*/
//PROGRAM

#include<stdio.h> 
#include<stdlib.h>

int main(){

	int a,b; 
	scanf("%d %d",&a,&b); 
	int mat[a+b]; 
	for(int i=0;i<a+b;i++){
		scanf("%d",&mat[i]);
	}

	for(int i=0;i<a+b;i++){ 
		for(int j=0; j<a+b; j++){ 
			if(mat[i]>mat[j]){
				int t=mat[i]; 
				mat[i]=mat[j]; 
				mat[j]=t;
			}
		}
	}

	for(int i=0;i<a+b;i++){
		printf("%d ", mat[i]);
	} 
	return 0;
}