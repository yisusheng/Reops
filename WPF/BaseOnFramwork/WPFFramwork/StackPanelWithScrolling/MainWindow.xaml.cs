using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
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

namespace StackPanelWithScrolling
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            MemberInfo[] members = typeof(Colors).GetProperties();
            //Type properties = typeof(Colors).GetType().DeclaringType;

            foreach (MemberInfo member in members)
            {
                //Color color = (Color)member.GetValue(null);
                TextBlock textBlock = new TextBlock();
                textBlock.Text = String.Format("{0} \x2014",
                    member.Name.ToString());
                stackPanel.Children.Add(textBlock);
            }


            
        }
    }
}
