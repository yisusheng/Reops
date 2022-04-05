using System;
using System.Windows;
using System.Windows.Controls;

namespace Project1
{
    public partial class Window1 : Window
    {
        NickNames names;

        public Window1()
        {
            InitializeComponent();
            this.addButton.Click += addButton_Click;

            this.names=new NickNames();

            DockPanel.DataContext = this.names;
        }

        void addButton_Click(object sender,RoutedEventArgs e)
        {
            this.names.Add(new NickName());
        }
    }
}
