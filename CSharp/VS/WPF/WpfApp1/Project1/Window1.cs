using System;
using System.Windows;
using System.Windows.Controls;

namespace Project1_old
{
    internal class Window1 : Window
    {
        public Window1()
        {
            this.Title = "Hello,WPF!";

            Button button = new Button();
            button.Content = "Click me";
            button.Width = 200;
            button.Height = 25;
            button.Click += Button_Click;

            this.Content = button;
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            MessageBox.Show(
                "You've done that before, haven't you...",
                "Nice!");
        }
    }
}
