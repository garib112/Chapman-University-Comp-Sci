public class Ch1Ex6
{
	public static void main(String[] args)
	{
	double gearsize = 100;
	double cadence = 90;
	double speed = gearsize * 3.14 * ((double)1/12) * ((double)1/5280) *cadence * 60;
	System.out.println (speed);
	}
}