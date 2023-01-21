using System;
namespace GetLine
{
    class Program{
        static void Main(string []args){
            string str=Console.ReadLine();
           Console.WriteLine($"{str.Substring(0,str.IndexOf('\\'))}");
        }
    }
}