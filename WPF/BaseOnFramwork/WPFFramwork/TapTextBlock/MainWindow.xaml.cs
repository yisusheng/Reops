﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace TapTextBlock
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        Random rand = new Random();
        byte[] rgb = new byte[3];

        public MainWindow()
        {
            InitializeComponent();
        }

        private void txtblk_MouseDown(object sender, MouseButtonEventArgs e)
        {
            TextBlock txtblk = sender as TextBlock;
            rand.NextBytes(rgb);
            Color clr = Color.FromArgb(255, rgb[0], rgb[1], rgb[2]);
            txtblk.Foreground = new SolidColorBrush(clr);
        }
    }
}