/*
string - indexOf() 
Fill in the missing lines of code so that the program prints yes if the input string str contains z or y. 
Else the program prints no. 
Examples: 
If the input value is tidy, the output is yes 
If the input value is axe, the output is no 
If the input value is ziffy, the output is yes 

Hint: If the indexOf method returns -1, then the character is not present.
*/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		if(str.indexOf('z')>-1 || str.indexOf('y')>-1){
		    System.out.println("yes");
		}else{
		    System.out.println("no");
		}
		
	}
}
