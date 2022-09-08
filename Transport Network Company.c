/*
Transport Network Company 
The program must accept an uppercase alphabet CH (only either O or U) and a number N as the input. 
The program must print the output based on the following conditions. If CH is O, it represents Ola. 
When O is chosen, it must check for the following options, If N is 1, then print Auto.If N is 2, then print Mini.
If N is 3, then print Micro. If N is 4, then print Prime. If any of the input values is not in the list mentioned above,
then the program must print Invalid. If CH is U, it represents Uber. When U is chosen, it must check for the following options,
If N is 1, then print Auto. - If N is 2, then print Cab. If any of the input values is not in the list mentioned above, then the program must print Invalid.

Example Input/Output 1: 
Input: O 2 
Output: Ola Mini 

Example Input/Output 2: 
Input: U 2 
Output: Uber Cab
*/

#include<stdio.h> 
#include<stdlib.h>
int main(){
	int a; 
	char b; 
	scanf("%c %d",&b,&a); 
	if(b=='O' && a<5){
		printf("Ola "); 
	}else if(b=='U' && a<3){
		printf("Uber ");
	}
	if(b=='U') { 
		if(a==1){
			printf("Auto"); 
		}else if(a==2){
			printf("Cab"); 
		}else{
			printf("Invalid");
		}
	}
	else{ 
		if(a==1) {
			printf("Auto"); 
		}else if(a==2) {
			printf("Mini"); 
		}else if(a==3){
			printf("Micro");
		}else if(a==4){
			printf("Prime"); 
		}else{
			printf("Invalid");
		}
	}
}