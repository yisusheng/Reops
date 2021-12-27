using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            foreach(string arg in args)
            {
                Console.WriteLine("Args:{0}", arg);
            }

            Console.ReadKey();
        }
    }
}
