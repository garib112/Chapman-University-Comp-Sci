import java.util.Scanner;
public class Ch3Ex3
{
	public static void main (String[] args)
	{
	Scanner keyboard = new Scanner(System.in);
	String sex = "";
	int heightF = 0;
	int heightM = 0;
	int heightFfeet = 0;
	int heightFinch = 0;
	int heightMfeet = 0;
	int heightMinch = 0;
	double heightC = 0;
	double heightCinch = 0;

	while (true)
		{
			System.out.println("Please enter the sex of your child? or enter 'Quit' to exit the program. ");
			sex = keyboard.nextLine();

			sex = sex.toLowerCase();
			if (sex.equals("male"))
				{
					System.out.println("Please enter the father's height in feet: ");
					heightFfeet = keyboard.nextInt();
					System.out.println("Please enter the father's height in inches: ");
					heightFinch = keyboard.nextInt();

					System.out.println("Please enter the mother's height in feet: ");
					heightMfeet = keyboard.nextInt();
					System.out.println("Please enter the mother's height in inches: ");
					heightMinch = keyboard.nextInt();

					heightF = (heightFfeet*12) + heightFinch;
					heightM = (heightMfeet*12) + heightMinch;

					heightC = ((heightM * (double)13/12) + heightF)/ 2;
					heightC = heightC/12;
					heightCinch = (heightC - (int) heightC)*12;
					System.out.println("The height of th child will be: " + (int)heightC + " feet and " + (int)heightCinch + " inches.");

				}
			else if (sex.equals("female"))
				{
					System.out.println("Please enter the father's height in feet: ");
					heightFfeet = keyboard.nextInt();
					System.out.println("Please enter the father's height in inches: ");
					heightFinch = keyboard.nextInt();

					System.out.println("Please enter the mother's height in feet: ");
					heightMfeet = keyboard.nextInt();
					System.out.println("Please enter the mother's height in inches: ");
					heightMinch = keyboard.nextInt();

					heightF = (heightFfeet*12) + heightFinch;
					heightM = (heightMfeet*12) + heightMinch;

					heightC = ((heightF * (double)12/13) + heightM)/ 2;
					heightC = heightC/12;
					heightCinch = (heightC - (int) heightC) *12;
					System.out.println("The height of th child will be: " + (int)heightC + " feet and " + (int)heightCinch + " inches.");

				}
			else if (sex.equals("quit"))
				break;
		}
	}
}