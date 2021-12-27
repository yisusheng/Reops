using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            for(int i=0;i<args.Length;i++)
            {
                Console.WriteLine("Args:{0}", args[i]);
            }

            Console.ReadKey();
        }
    }
}
