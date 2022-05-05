using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Autodesk.AutoCAD.ApplicationServices;
using Autodesk.AutoCAD.DatabaseServices;
using Autodesk.AutoCAD.EditorInput;
using Autodesk.AutoCAD.Runtime;


namespace ClassLibrary1
{
    public class LineDemo
    {
        [CommandMethod("LineDraw")]
        public void LineDraw()
        {
            Line line = new Line();
        }
    }
}
