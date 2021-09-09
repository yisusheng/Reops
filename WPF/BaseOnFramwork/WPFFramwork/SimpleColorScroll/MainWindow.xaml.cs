using System;
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

namespace SimpleColorScroll
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        //private void redSlider_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double> e)
        //{

        //}

        void OnSliderValueChanged(object sender, RoutedPropertyChangedEventArgs<double> args)
        {
            byte r = (byte)redSlider.Value;
            byte g = (byte)GreenSlider.Value;
            byte b = (byte)blueSlider.Value;

            redValue.Text = r.ToString("X2");
            GreenValue.Text = g.ToString("X2");
            blueValue.Text = b.ToString("X2");

            brushResult.Color = Color.FromArgb(255, r, g, b);
        }
    }
}
