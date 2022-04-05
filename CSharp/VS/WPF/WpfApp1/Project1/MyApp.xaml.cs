using System;
using System.Windows;

namespace Project1
{
    public partial class MyApp : Application
    {
        [STAThread]
        static void Main()
        {
            MyApp app = new MyApp();
            app.Startup += app.AppStartup;
            app.Run();
        }

        void AppStartup(object sender,StartupEventArgs e)
        {
            Window window = new Window1();
            window.Show();
        }
    }
}