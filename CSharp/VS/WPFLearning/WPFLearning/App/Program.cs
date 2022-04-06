using System;
using System.Windows;

namespace App
{
    class Program
    {
        [STAThread]
        static void Main()
        {
            Application app=new Application();
            Window1 window=new Window1();
            window.Show();
            app.Run();
        }
    }
}