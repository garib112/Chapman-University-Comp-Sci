public class Pizza
{
	int size;
	int cheese;
	int ham;
	int pineapple;
	int bacon;

	public void displayInfo ()
	{
		/* Pizza this*/
		System.out.println(" " + this.size + " inch pizza");
		if (this.cheese == 1) System.out.println(" with cheese");
		if (this.ham == 1) System.out.println(" with ham");
		if (this.pineapple == 1) System.out.println(" with pineapple");
		if (this.bacon == 1) System.out.println(" with bacon");
	}

	public int getCost()
	{
		int cost = 0;
		if(this.size == 10) cost += 8;
		if(this.size == 14) cost += 10;
		if(this.size == 18) cost += 12;

		if(this.cheese == 1) cost += 1;
		if(this.ham == 1) cost += 2;
		if(this.pineapple == 1) cost += 1;
		if(this.bacon == 1) cost += 2;

		return cost;
	}
}
