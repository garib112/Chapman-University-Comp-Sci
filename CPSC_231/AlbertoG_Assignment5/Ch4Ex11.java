import java.util.Scanner;
import java.util.InputMismatchException;

public class Ch4Ex11
{
	public static void main (String[] args)
	{
		Pizza pz = new Pizza();

		pz.setSize("Large");
		pz.setHam(2);
		pz.setCheese(1);
		pz.setPepperoni(1);

		System.out.println(pz.getDescription());
		
		//I couldnt get this part to work
		
		/*Pizza pizza1 = new Pizza("large" , 1 , 0 , 1);
		Pizza pizza2 = new Pizza("medium" , 0 , 2, 2 );
		PizzaOrder order = new PizzaOrder();
		order.setNumPizza(2);

		order.setPizza1(pizza1);
		order.setPizza2(pizza2);

		double total = order.calcTotal();

		System.out.print("The total price of all the pizzas is: $" + total);
		*/
	}
}