using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AGaribay_proj02
{
    class Program
    {

        static void Main(string[] args)
        {
            while(true)
            {
                AskName();
                Console.WriteLine();
                AskAge();
                Console.WriteLine();
                AskSSNum();
                Console.WriteLine();
            }
        }

        public static void AskName()
        {

            string name;
            bool NameChecker = false;
            while (NameChecker == false)
            {
                Console.WriteLine("Please Enter Your Name:");
                name = Console.ReadLine();
                if (containsNumber(name))
                {
                    Console.WriteLine("You entered a number in your response. Please Try again.");
                    Console.WriteLine();
                }
                else
                {
                    Console.WriteLine("Your Name is " + name);
                    NameChecker = true;
                }
            }
        }

        public static void AskAge()
        {
            int age;
            bool Numchecker = false;
            while(Numchecker == false)
            {
                Console.WriteLine("Please Enter Your Age:");
                if (int.TryParse(Console.ReadLine(), out age))
                {
                    Console.WriteLine("Your age is " + age);
                    Numchecker = true;
                }
                else
                {
                    Console.WriteLine("You response contained something that wasn't a number. Please try again.");
                    Console.WriteLine();
                }
            }
        }

        public static void AskSSNum()
        {
            int ssNum;
            bool Numchecker = false;
            while (Numchecker == false)
            {
                Console.WriteLine("Please Enter Your Social Security Number with no Spaces:");
                if (int.TryParse(Console.ReadLine(), out ssNum))
                {
                    Console.WriteLine("Your SSN is " + ssNum);
                    Numchecker = true;
                }
                else
                {
                    Console.WriteLine("You response contained something that wasn't a number. Please try again.");
                    Console.WriteLine();
                }
            }
        }

        public static bool containsNumber(string input)
        {
            return input.Where(x => Char.IsDigit(x)).Any();
        }
    }
}
