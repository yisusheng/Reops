using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingletonPattern
{
    class Program
    {
        static void Main(string[] args)
        {
        }
    }

    class TaskManager
    {
        private static TaskManager tm = null;
        private TaskManager()
        {
            Console.WriteLine("初始化窗口。");
        }

        public static TaskManager getInstance()
        {
            if(tm == null)
            {
                tm = new TaskManager();
            }
            return tm;
        }
    }
}
