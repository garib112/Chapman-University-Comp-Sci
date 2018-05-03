import java.util.Scanner;
import java.util.InputMismatchException;

public class Day10
{
	public static void main (String[] args)
	{

		askForPizza(1);
		askForPizza(2);
		askForPizza(3);
	}

	public static void askForPizza(int pizzaNumber)
	{

		Pizza pz = new Pizza();

		System.out.println("Enter pizza #" + pizzaNumber +" size (10 , 14, 18): ");
		pz.size = getInt();

		System.out.println("Enter pizza #"  + pizzaNumber +" cheese (no = 0; yes = 1 ");
		pz.cheese = getInt();

		System.out.println("Enter pizza #" + pizzaNumber +" ham (no = 0; yes = 1): ");
		pz.ham = getInt();

		System.out.println("Enter pizza #" + pizzaNumber + " pineapple (no = 0; yes = 1): ");
		pz.pineapple = getInt();

		System.out.println("Enter pizza #" + pizzaNumber + " bacon (no = 0; yes = 1): ");
		pz.bacon = getInt();

		int cost = pz.getCost();

		System.out.println("Pizza #" + pizzaNumber + "cost: $" + cost);
		pz.displayInfo();
		System.out.println("");

	}


	public static int getInt()
	{
		int input;
		Scanner s = new Scanner(System.in);
		while (true)
		{
			try
			{
				System.out.println("Enter a number:");
				input = s.nextInt();
				break;
			}
			catch(InputMismatchException e)
			{
				s.nextLine();
			}
			System.out.println("Invalid! Try again.");
		}
		return input;
	}
}