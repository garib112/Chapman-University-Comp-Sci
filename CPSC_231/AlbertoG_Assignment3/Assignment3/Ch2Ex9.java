import java.util.Scanner;

public class Ch2Ex9
{
	public static void main(String[] args)
	{

	Scanner keyboard = new Scanner (System.in);
	System.out.println("Enter a line of text: ");
	String sentence = keyboard.nextLine();

	String newsentence = sentence.replace ("hate" , "love");

	System.out.println(newsentence);

	}
}