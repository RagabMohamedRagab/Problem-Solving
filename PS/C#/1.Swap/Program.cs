// Happy Code 
// Time Complexity O(1)
// Space Complexity O(1)
using System;
namespace Swap
{
    class Prpgram{
        private static void Main(string []args){
            string []Arr=Console.ReadLine().Split(' ');
            int x=Int32.Parse(Arr[0]);
            int y=Int32.Parse(Arr[1]);
            Swap(ref x,ref y);
            Console.WriteLine($"{x} {y}");
        }
        public static void  Swap(ref int x,ref int y){
            int temp=x;
            x=y;
            y=temp;
        }
    }
}
