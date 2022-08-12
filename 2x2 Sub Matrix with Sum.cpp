/*
2*2 Sub Matrix with Sum 
A matrix of size R*C and an integer S are passed as the input to the program. 
The program must print the 2*2 submatrix whose sum is S. If more than one such submatrices exist, 
print the first occurring submatrix (when traversed from top to bottom in the matrix and from left to right in each row).
Boundary Condition(s): 2 <= R, C <= 100 
Input Format: The first line contains the value of R and C separated by space(s). 
The next R lines contain C integers separated by space(s). 
Output Format: The first two lines contain the submatrix. 

Example Input/Output 1: 
Input: 
3 3 
23 12 45 
25 26 29 
33 35 36 
119 
Output: 
25 26 
33 35 

Example Input/Output 2: 
Input: 
4 3 
48 10 77 
4 99 15 
75 29 97 
40 84 62 
272 
Output: 
29 97 
84 62
*/
//Program 

#include<stdio.h> 
#include<stdlib.h>

int main(){
	
	int a, b, sum; 
	scanf("%d %d",&a,&b); 
	int mat[a][b]; 
	for(int i=0;i<a;i++){ 
		for(int j=0;j<b;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	scanf("%d", &sum); 

	for(int i=0;i<a;i++){ 
		for(int j=0; j<b; j++){
			int s=0; 
			if(i+2<=a && j+2<=b){ 
				for(int k=i;k<i+2;k++) { 
					for(int l=j;l<j+2;l++) {
						s+=mat[k][l];
					}
				}
			}
			if(s==sum){ 
				for(int k=i;k<i+2;k++) { 
					for(int l=j;l<j+2;l++) {
						printf("%d ", mat[k][l]);
					}
					printf("\n");
				}
				return 0;
			}
		}
	}
}

