// App.xaml.cs
using System;
using System.Windows;
using App;
namespace App1
{
    public partial class App : System.Windows.Application
    {
        protected override void OnStartup(StartupEventArgs e)
        {
            base.OnStartup(e);

            Window1 window = new Window1();
            window.Show();
        }
    }
}