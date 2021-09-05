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

namespace ClickTextBlock1
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

        void OnTextBlockClicked(object sender,MouseButtonEventArgs e)
        {
            TextBlock txtblk = sender as TextBlock;
            txtblk.Foreground = GetRandomBrush();
            e.Handled = true;
        }

        protected override void OnMouseDown(MouseButtonEventArgs e)
        {
            contentGrid.Background = GetRandomBrush();
            base.OnMouseDown(e);
        }

        Brush GetRandomBrush()
        {
            rand.NextBytes(rgb);
            Color clr = Color.FromArgb(255, rgb[0], rgb[1], rgb[2]);
            return new SolidColorBrush(clr);
        }
    }
}
