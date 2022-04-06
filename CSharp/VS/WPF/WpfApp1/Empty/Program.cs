using System;
using System.Windows;

namespace Empty
{
    internal class Program
    {
        [STAThread]
        static void Main()
        {
            Application app = new System.Windows.Application();
            Window1 window = new Window1();
        }
    }
}
