public class PizzaOrder
{
	int num_Pizzas = 0;
	Pizza pizza_1;
	Pizza pizza_2;
	Pizza pizza_3;

	PizzaOrder()
	{
		num_Pizzas = 0;
		pizza_1 = new Pizza();
		pizza_2 = new Pizza();
		pizza_3 = new Pizza();
	}

	PizzaOrder(int numPizzas, Pizza pizza1, Pizza pizza2, Pizza pizza3)
	{
		num_Pizzas = numPizzas;
		pizza_1 = new Pizza(pizza1.getSize(), pizza1.getHam() , pizza1.getPepperoni(), pizza1.getCheese());
		pizza_2 = new Pizza(pizza2.getSize(), pizza2.getHam() , pizza2.getPepperoni(), pizza2.getCheese());
		pizza_3 = new Pizza(pizza3.getSize(), pizza3.getHam() , pizza3.getPepperoni(), pizza3.getCheese());
	}

	public void setNumPizzas(int numPizzas)
	{
		num_Pizzas = numPizzas;
	}

	public void setPizza1 (Pizza pizza1)
	{
		pizza_1.setSize() = pizza1.getSize();
		pizza_1.setHam() = pizza1.getHam();
		pizza_1.setPepperoni() = pizza1.getPepperoni();
		pizza_1.setCheese() = pizza1.getCheese();

	}

	public void setPizza2 (Pizza pizza2)
	{
		pizza_2.setSize() = pizza2.getSize();
		pizza_2.setHam() = pizza2.getHam();
		pizza_2.setPepperoni() = pizza2.getPepperoni();
		pizza_2.setCheese() = pizza2.getCheese();
	}

	public void setPizza3 (Pizza pizza3)
	{
		pizza_3.setSize() = pizza3.getSize();
		pizza_3.setHam() = pizza3.getHam();
		pizza_3.setPepperoni() = pizza3.getPepperoni();
		pizza_3.setCheese() = pizza3.getCheese();
	}

	public double calcTotal()
	{
		totalCost = 0;

		if (num_Pizzas == 1)
		{
			totalCost = pizza_1.calcCost();
		}
		else if (numPizzas == 2) 
		{
			totalCost = pizza_1.calcCost() + pizza_2.calcCost();
		}
		else if (numPizzas == 3)
		{
			totalCost = pizza_1.calcCost() + pizza_2.calcCost() + pizza_3.calcCost();
		}
		return totalCost;
	}
}