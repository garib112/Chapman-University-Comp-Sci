import java.util.Scanner;

public class Ch2Ex2
{
	public static void main(String[] args)
	{
	Scanner keyboard = new Scanner(System.in);
	System.out.println("Enter your first name:");
	String firstname = keyboard.nextLine();
	System.out.println("Enter your last name:");
	String lastname = keyboard.nextLine();

	
	

	String first = firstname.toLowerCase();
	String last = lastname.toLowerCase();
	String begining = first.substring (0,1);
	String end = first.substring (2,first.length()); 
	String firstend = first.substring (1,2).toUpperCase();
	System.out.println(firstend + end + begining + "ay");

	String lastb = last.substring (2,last.length());
	String laste = last.substring (0,1);
	String firstlast = last.substring (1,2).toUpperCase();
	System.out.println (firstlast +lastb + laste +"ay");
	}
}