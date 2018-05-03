import java.util.Scanner;

public class Ch2Ex4
{
	public static void main(String[] args)
	{
	Scanner keyboard = new Scanner(System.in);
	System.out.println("Enter the distance of the commute:");
	double distance = keyboard.nextDouble();
	System.out.println("Enter the fuel consumption:");
	double fuelconsump = keyboard.nextDouble();
	System.out.println("Enter the price of gas per gallon:");
	double pricegas = keyboard.nextDouble();

	Double commutecost = distance * ((double)1/fuelconsump) * pricegas;
	System.out.println("This is the cost of the commute: $" + commutecost);
	}
}