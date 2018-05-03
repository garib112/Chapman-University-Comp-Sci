import java.util.Scanner;

public class Ch2Ex7
{
	public static void main(String[] args)
	{
	Scanner keyboard = new Scanner (System.in);

	System.out.println("Enter the price of item: (from 25 cents to a dollar, in 5-cent increments):");

	int money = keyboard.nextInt();

	int change = 100 - money;

	int quarters = change/25 ;

	int dimes = (change%25) / 10;

	int nickels = ((change%25)%10) / 5;

	System.out.println ("You bought an item for " + money + " cents and gave me a dollar, so your change is " + quarters + " Quarters " + dimes + " Dimes " +nickels + " Nickels ");

	}
}