using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            //foreach(string arg in args)
            //{
            //    Console.WriteLine("Args:{0}", arg);
            //}

            //Console.ReadKey();
            showEnvironmentDetils();
            GetUserData();
        }

        static void showEnvironmentDetils()
        {
            foreach (string drive in Environment.GetLogicalDrives())
                Console.WriteLine("OS:{0}", drive);
            Console.WriteLine("Number of processors:{0}",
                Environment.ProcessorCount);
            Console.WriteLine(".NET Version:{0}",
                Environment.Version);
        }
        static void GetUserData()
        {
            Console.WriteLine("Please enter your name:");
            string userName = Console.ReadLine();
            Console.WriteLine("Please enter your age:");
            string userAge = Console.ReadLine();

            ConsoleColor prevColor = Console.ForegroundColor;
            Console.ForegroundColor = ConsoleColor.Yellow;

            Console.WriteLine("Hello {0}! You are {1} years old.",
                userName, userAge);

            Console.ForegroundColor = prevColor;
        }
    }
}
 