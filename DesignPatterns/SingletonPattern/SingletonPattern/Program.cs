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
            TaskManager.getInstance();
            TaskManager.getInstance();
        }
    }

    class TaskManager
    {
        private static TaskManager tm = null;
        private static int number = 0;
        private TaskManager()
        {
            Console.WriteLine("初始化窗口。");
            Console.ReadLine();
        }

        public void displayProcess()
        {
            Console.WriteLine("存在窗口{0}个",number);
            Console.ReadLine();
        }

        public static TaskManager getInstance()
        {
            if(tm == null)
            {
                tm = new TaskManager();
                number += 1;
            }
            tm.displayProcess();
            return tm;
        }
    }
}
