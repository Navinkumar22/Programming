/*
string - equals() 
The below program accepts three string values s1, s2, s3. 
Among them only two values are equal ignoring case sensitivity. 
Fill in the missing lines of code so that the program prints the string value which is different from the remaining two. 
Example: - 
If the input values are 
abcd, kilo, AbCD, 
the output must be kilo

*/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in); 
        
        String s1 = sc.nextLine();
        String s2 = sc.nextLine(); 
        String s3 = sc.nextLine();
        
        if (s1.equalsIgnoreCase(s2)){
            System.out.print(s3); 
        }
        else if(s2.equalsIgnoreCase(s3)){
            System.out.print(s1);
        }
        else{
            System.out.print(s2);
        }
	}
}
