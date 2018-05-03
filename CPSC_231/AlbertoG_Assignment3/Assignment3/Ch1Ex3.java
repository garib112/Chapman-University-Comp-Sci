public class Ch1Ex3
{
	public static void main(String[] args)
	{
	String first = "alberto";
	String last = "garibay";
	String begining = first.substring (0,1);
	String end = first.substring (1,first.length()); 
	System.out.println(end + begining + "ay");
	String lastb = last.substring (1,last.length());
	String laste = last.substring (0,1);
	System.out.println (lastb + laste +"ay");
	}
}