public class Dog
{
	//Properties:
	//<public/private> <modifiers> <type> <name>;

	//Methods:
	//<public/private> <modifiers> <returntype> <name> ( <arguments> ) {body}

	public String name;
	public int age;
	public String breed;
	public float weight;
	public String color;

	public Dog(String name, int age)
	{
		//do stuff
	}

	public Dog(String name, int age, String breed)
	{
		// do stuff
	}

	public String getName()
	{
		return this.name;
	}

	public void setName (String name)
	{
		if(name.length > 2)
		{
			this.name = name; 
		}
	}

	public void speak()
	{
		System.out.println("Hi I'm a Dog. My name is " + this.name);
	}
}