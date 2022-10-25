// Happy Code 
// Time Complexity  O(N)
// Space Complexity O(N)

using System;
namespace Summation{
    class Program{
        static void Main(string[]args){
           long N=Int64.Parse(Console.ReadLine());
           string []arr=Console.ReadLine().Split(' ');
           int i=0,total=0;
           while(i<arr.Length){
               total+=Int32.Parse(arr[i]);
               i++;
           }
           Console.WriteLine($"{Math.Abs(total)}");
        }
    }
}