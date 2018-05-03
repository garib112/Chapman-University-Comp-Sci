import java.util.Scanner;

public class Ch3Ex1
{
	public static void main (String[] args)
	{
		Scanner keyboard = new Scanner (System.in);

		double n = keyboard.nextDouble();
		double guess = n/2;

		//double difference = 0;
		double difference = Double.MAX_VALUE;
		double lastGuess = guess;

		while (Math.abs(difference) >= .01)
			{
			double r = n/guess;
			guess = (guess + r)/2;
			difference = ((guess - lastGuess)/lastGuess);	
			lastGuess = guess;
			}
		System.out.println(guess);		
	}
}