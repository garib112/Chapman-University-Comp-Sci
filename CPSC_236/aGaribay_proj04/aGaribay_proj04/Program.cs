using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.VisualBasic.FileIO;
using System.Timers;
using System.Net.NetworkInformation;
using System.IO;

namespace aGaribay_proj04
{
    class Program
    {
        static void Main(string[] args)
        {
            bool menuChecker = true;

            while (true)
            {
                Console.WriteLine("Before we start please enter the name of the file you would like the program to read from?");
                string fileName = Console.ReadLine();
                Console.WriteLine();

                
                if (!File.Exists(@fileName))
                {
                    Console.WriteLine("It appears that the file you entered does not exist");
                    Console.WriteLine("The program will now restart. Please make sure your file exist before starting.");
                    Console.ReadLine();
                    return; // Since no file existed, nothing in the file to read, exit the method
                }
                
                using (TextFieldParser parser = new TextFieldParser(@fileName))
                {
                    string[] myArray = new string [10];

                    bool pinging = false;
                    Ping pinger = new Ping(); 
                
                    parser.TextFieldType = FieldType.Delimited;
                    parser.SetDelimiters(",");


                    int num = 0;
                    while (!parser.EndOfData)
                    {
                        string[] parts = parser.ReadFields();
                        myArray[num] = parts[0];
                        num++;
                        
                    }    

                    Console.WriteLine("Here is the menu: ");
                    Console.WriteLine();

                    while (menuChecker == true)
                    {
                        Console.WriteLine("Enter the number of the action you would like to complete");
                        Console.WriteLine("1. Start");
                        Console.WriteLine("2. Stop");
                        Console.WriteLine("3. Exit");

                        string option = Console.ReadLine();
                        Console.WriteLine();

                        if (option == "1")
                        {
                            Console.WriteLine(myArray[0]);

                            PingReply reply = pinger.Send();
                            pinging = reply.Status == IPStatus.Success;
                            Console.WriteLine(pinging);
                            Console.ReadLine();
                            break;
                        }
                        else if (option == "2")
                        {

                        }
                        else if (option == "3")
                        {
                            
                        }
                        else
                        {
                            Console.WriteLine("Please enter a valid response");
                            Console.ReadLine();
                        }
                    }
                }
               
            }

        }
        public static bool PingHost(string nameOrAddress)
        {
            bool pingable = false;
            Ping pinger = new Ping();
            try
            {
                PingReply reply = pinger.Send(nameOrAddress);
                pingable = reply.Status == IPStatus.Success;
            }
            catch (PingException)
            {
                // Discard PingExceptions and return false;
            }
            return pingable;
        }
    }
}
