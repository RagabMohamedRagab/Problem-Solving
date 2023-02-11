// Happy Code
// Time Complexity O(1)
// Space Complexity O(1)
using System;
namespace Strings
{
    class Program{
        static void Main(string []args){
           string s1=Console.ReadLine();
           string s2=Console.ReadLine();
           Console.WriteLine($"{s1.Length} {s2.Length}");
           Console.WriteLine($"{s1}{s2}");
           Console.WriteLine($"{s2[0]}{s1.Substring(1)} {s1[0]}{s2.Substring(1)}"); 
        }
    }
}