using System;

namespace SimpleClassExample
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("***** Fun with Class Type *****\n");

            Car mycar = new Car();
            mycar.petName = "Herry";
            mycar.currSpeed = 10;
        }
    }
}
