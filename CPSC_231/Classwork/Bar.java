public class Bar
{   
   public static void main(String[] args)
   {
        foo(2);
        foo(-2);
   }
 

   public static void foo(int k)
   {
       if(k > 0)
       {
            foo(k - 1);
       }
       if(k < 0)
       {
            foo(k + 1);
       }
       System.out.println(k);
   }
}