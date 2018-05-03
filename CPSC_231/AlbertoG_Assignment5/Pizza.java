public class Pizza
{
	private String size;
	private int numHam;
	private int numCheese;
	private int numPepperoni;

	Pizza()
	{
		size = "small";
		numHam = 0;
		numPepperoni = 0;
		numCheese = 0;
	}

	Pizza(String new_size , int new_ham , int new_pepperoni, int new_cheese)
	{
		size = new_size.toLowerCase();
		numHam = new_ham;
		numPepperoni = new_pepperoni;
		numCheese = new_cheese;

	}

	public void setSize(String new_size)
	{
		size = new_size.toLowerCase();
	}
	public void setHam(int new_ham)
	{
		numHam = new_ham;
	}
	public void setPepperoni(int new_pepperoni)
	{
		numPepperoni = new_pepperoni;
	}
	public void setCheese(int new_cheese)
	{
		numCheese = new_cheese;
	}

	public String getSize()
	{
		return size;
	}
	public int getHam()
	{
		return numHam;
	}
	public int getPepperoni()
	{
		return numPepperoni;
	}
	public int getCheese()
	{
		return numCheese;
	}
	public double calcCost()
	{
		double cost = 0;

		cost += (numHam * 2);
		cost += (numCheese * 2);
		cost += (numPepperoni * 2);

		if (size.equals("small")) cost += 10;
		if (size.equals("medium")) cost += 12;
		if (size.equals("large")) cost += 14;

		return cost;
	}
	public String getDescription()
	{
		String message = "Pizza size:" + size + "\n";
		message += "Number of cheese toppings is: " + numCheese + "\n";
		message += "Number of ham toppings is: " + numHam + "\n";
		message += "Number of pepperoni toppins is: " + numPepperoni + "\n";
		message += "Total cost of the pizza is: " + this.calcCost();

		return message;
	}
}