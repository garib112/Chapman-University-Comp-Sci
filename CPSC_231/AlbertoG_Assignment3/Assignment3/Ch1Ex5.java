public class Ch1Ex5
{
	public static void main(String[] args)
	{
	String sent = "I hate";
	String newS = "";
	for (int i = 0 ; i < sent.length(); i++)
		{
		newS = newS + sent.substring (i,i+1);
		}
	if (newS.substring(2,newS.length()).equals("hate"))
		{
		String newV = sent.substring (0,2);
		newS = newV + "love";
		System.out.println(newS);
		}

	}
}