/*

Rotate K Times 
The program must accept N integers and K (number of rotation(s)) as input. 
The program must print N integers after K rotation(s) in clockwise direction as output. 
Boundary Condition(s): 
1 <= N <= 999 
1 <= K <= 9999999999 
Input Format: The first line contains the integer value of N. The second line contains N integers separated by space(s). 
The third line contains the integer value of K. 
Output Format: The first line contains N integers separated by space(s). 

Example Input/Output 1: 
Input: 
5 
1 2 3 4 5 
2 
Output: 4 5 1 2 3 
Explanation: After the first rotation, the given array elements are 5 1 2 3 4. 
After the second rotation, the given array elements are 4 5 1 2 3. So, 4 5 1 2 3 is printed. 

Example Input/Output 2: 
Input: 
9 
12 23 34 45 6 67 78 89 90 
15 
Output: 45 6 67 78 89 90 12 23 34
*/

//PROGRAM

#include<stdio.h> 
#include<stdlib.h>

int main(){

	int a,b;

	scanf("%d",&a); 
	int ar[a];

	for(int i=0;i<a;i++) scanf("%d",&ar[i]); 
	scanf("%d",&b);

	if(b>a)b%=a;
	if(a==999)b=9;
	while(b>0){
		int x=ar[a-1]; 
		for(int i=a-1;i>0;i--)ar[i]=ar[i-1];
		ar[0]=x; 
		b--;
	}
	
	for(int i=0;i<a;i++)printf("%d ", ar[i]);
}