public class Ch3Ex8
{
	public static void main (String[] args)
	{
		int T = 0 , O = 0 , G = 0 , D = 0;
        boolean keepGoing = true;
            for (T = 0 ;  T < 10 ; T++)  
            {    
                for (O = 0 ; O < 10 ; O++)  
                {    
                    for (G = 0 ; G < 10 ; G++) 
                    {    
                        for (D = 0 ; D < 10 ; D++)
                        {    
                            if ((D == G) || (D == O) || (D == T) || (G == O) || (G == T) || (O == T))
                            {
            
                                continue;
                            }

                            else if (400*T + 40*O + 4*O == 1000*G + 100*O + 10*O + D)
                            {      
                               
                                System.out.println("T = " + T);
                                System.out.println("O = " + O);
                                System.out.println("G = " + G);
                                System.out.println("D = " + D);
                                System.exit(0);
                            }
                        }
                    }
                }      
            }
       //}
	}
}