using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ComponentModel;

namespace Project1
{
    public class NickName : INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        private void Notify(string propName)
        {
            if (PropertyChanged != null)
            {
                PropertyChanged(this, new PropertyChangedEventArgs(propName));
            }
        }

        string name;
        public string Name
        {
            get { return name; }
            set { name = value; Notify("Name"); }
        }

        string nick;
        public string Nick
        {
            get { return nick; }
            set { nick = value; Notify("Nick"); }
        }

        public NickName() : this("name", "nick") { }
        public NickName(string name,string nick)
        {
            this.name = name;
            this.nick = nick;
        }
    }
}
