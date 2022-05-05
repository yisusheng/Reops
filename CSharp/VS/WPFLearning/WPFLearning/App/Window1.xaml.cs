using System;
using System.Windows;
using System.Windows.Controls;

namespace App
{
    public partial class Window1 : Window
    {
        public Window1()
        {
            InitializeComponent();
            windowMenu.SubmenuOpened += windowMenu_SubmenuOpened;
        }

        void windowMenu_SubmenuOpened(object sender,RoutedEventArgs e)
        {
            windowMenu.Items.Clear();
            foreach(Window window in Application.Current.Windows)
            {
                MenuItem item = new MenuItem();
                item.Header = window.Title;
                item.Click += windowMenuItem_Click;
                item.Tag = window;
                item.IsChecked = window.IsActive;
                windowMenu.Items.Add(item);
            }
        }

        void windowMenuItem_Click(object sender,RoutedEventArgs e)
        {
            Window window = (Window)((MenuItem)sender).Tag;
            window.Activate();
        }
    }
}