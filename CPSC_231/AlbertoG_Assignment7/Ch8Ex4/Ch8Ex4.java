import java.util.Scanner;
public class Ch8Ex4
{
    public static void main (String[] args)
    {
        Scanner s = new Scanner(System.in);
        World w = new World();

        w.initializeBoard();
        w.displayBoard();
        System.out.println();


        for(int i = 0 ; i < 50 ; i++)
        {
            System.out.print("Hit enter to proceed:");
            s.nextLine();
            System.out.println();

            w.simulate("o");
            w.simulate("X");
            w.displayBoard();
            System.out.println();
        }
    }
}
